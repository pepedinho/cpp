/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Container.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:35:28 by itahri            #+#    #+#             */
/*   Updated: 2024/11/11 17:42:12 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Container.hpp"

bool check_date_format(const std::string& date) {
  if (date.length() != 10)
    return false;
  if (date[4] != '-' || date[7] != '-')
    return false;
  for (size_t i = 0; i < date.size(); ++i) {
    if (i == 4 || i == 7)
      continue;
    if (!std::isdigit(date[i]))
      return false;
  }

  int month = atoi(date.substr(5, 2).c_str());
  int day = atoi(date.substr(8, 2).c_str());
  
  if (month < 1 || month > 12)
    return false;
  if (day < 1 || day > 31)
    return false;

  return true;
}

std::string trim(const std::string& str) {
    size_t start = str.find_first_not_of(" \t\n\r\f\v\"");
    if (start == std::string::npos) 
     return "";
    size_t end = str.find_last_not_of(" \t\n\r\f\v\"");
    return str.substr(start, end - start + 1);
}

Container::Container(std::string input) {
  std::string line;

  _exchange.open(EXCHANGE_RATE_DB);

  if (_exchange.fail())
    throw std::invalid_argument("Cannot open file : data.csv");

  for (;std::getline(_exchange, line);) {
    if (trim(line.substr(0, line.find(('|')))) == "date") {
      continue;
    }
    _map_data[trim(line.substr(0, line.find(',')))] = std::atof(line.substr(line.find(',') + 1).c_str());
    // std::cout << "TEST > " << _map_data[line.substr(0, line.find(','))] << std::endl;
  }

  (_exchange.close(), _input.open(input.c_str()));

  if (_input.fail())
    throw std::invalid_argument("Cannot open file : " +  input);
  for (int i = 0;std::getline(_input, line); i++) {
    if (trim(line.substr(0, line.find(('|')))) == "date") {
      continue;
    } else if (line.find('|') == std::string::npos) {
      std::cerr << "Error : Bad input => " + line << std::endl;
      continue;
    } else if (!check_date_format(trim(line.substr(0, line.find(('|')))))) {
      std::cerr << "Error : Wrong date format => " + line.substr(0, line.find(('|'))) << std::endl;
      continue;
    }      
    compute(trim(line.substr(0, line.find('|'))), std::atof(line.substr(line.find('|') + 1).c_str()));
    // std::cout << "DEBUG F PART => " << trim(line.substr(0, line.find(('|')))) << std::endl;
    // _map_input[trim(line.substr(0, line.find('|')))] = std::atof(line.substr(line.find('|') + 1).c_str());
    // std::cout << "TEST INPUT > " << _map_input[line.substr(0, line.find('|'))] << std::endl;
  }
}



std::map<std::string, float>::const_iterator Container::find_closest(const std::string& ref) {
  std::map<std::string, float>::const_iterator it = _map_data.lower_bound(ref);

  if (it == _map_data.end()) {
    if (_map_data.empty())
      return _map_data.end();
    --it;
    return it;
  }

  if (it->first == ref)
    return it;

  if (it != _map_data.begin()) {
    --it;
    return it;
  }

  return _map_data.end();
}

void Container::compute(const std::string& time, float value) {
  std::string date;
  float rate;

    if (value > 1000) {
      std::cerr << "error : too large a number." << std::endl;
      return;
    } else if (value < 0) {
      std::cerr << "error : not a positive number." << std::endl;
      return;  
    }
    if (_map_data.find(time) == _map_data.end()) {
      // std::cout << "NOT FOUND => " << "\""<< it->first << "\"" << std::endl;
      std::map<std::string, float>::const_iterator tmp = find_closest(time);
      date = tmp->first;
      rate = tmp->second;
      // std::cout << "REPLACE BY => " << "\""<< date << "\"" << std::endl;
    } else {
      rate = _map_data[time];
      date = time;
    }
    std::cout << time << " => " << value << " = " << value * rate << std::endl;
    // _map_data[it->first]
}

Container::~Container() {};
