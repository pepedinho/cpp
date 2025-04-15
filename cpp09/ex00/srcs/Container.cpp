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
    _map_data[line.substr(0, line.find(','))] = std::atof(line.substr(line.find(',') + 1).c_str());
    // std::cout << "TEST > " << _map_data[line.substr(0, line.find(','))] << std::endl;
  }

  (_exchange.close(), _input.open(input.c_str()));

  if (_input.fail())
    throw std::invalid_argument("Cannot open file : " +  input);
  for (int i = 0;std::getline(_input, line); i++) {
    if (trim(line.substr(0, line.find(('|')))) == "date") {
      continue;
    } else if (line.find('|') == std::string::npos) {
      _error_stack.push_back("Error : Bad input => " + line );
      continue;
    } else if (!check_date_format(trim(line.substr(0, line.find(('|')))))) {
      _error_stack.push_back("Error : Wrong date format => " + line.substr(0, line.find(('|'))));
      continue;
    }      
    // std::cout << "DEBUG F PART => " << trim(line.substr(0, line.find(('|')))) << std::endl;
    _map_input[line.substr(0, line.find('|'))] = std::atof(line.substr(line.find('|') + 1).c_str());
    // std::cout << "TEST INPUT > " << _map_input[line.substr(0, line.find('|'))] << std::endl;
  }
}



std::map<std::string, float>::const_iterator Container::find_closest(const std::string& ref) {
  return _map_data.lower_bound(ref);
}

void Container::compute() {
  std::map<std::string, float>::iterator it;
  std::string date;
  float rate;

  for (it = _map_input.begin(); it != _map_input.end(); it ++) {
    if (it->second > 1000) {
      std::cerr << "error : too large a number." << std::endl;
      continue; 
    } else if (it->second < 0) {
      std::cerr << "error : not a positive number." << std::endl;
      continue;
    }
    if (_map_data.find(it->first) == _map_data.end()) {
      std::map<std::string, float>::const_iterator tmp = find_closest(it->first);
      date = tmp->first;
      rate = tmp->second;
    } else {
      rate = _map_data[it->first];
      date = it->first;
    }
    std::cout << "DEBUG DATE => " << date << std::endl;
    std::cout << date << " => " << it->second << " = " << it->second * rate << std::endl;
    // _map_data[it->first]
  }
  for (std::vector<std::string>::iterator ite = _error_stack.begin(); ite != _error_stack.end(); ite++) {
    std::cout << *ite << std::endl;
  }
}

Container::~Container() {};
