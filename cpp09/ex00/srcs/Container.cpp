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

Container::Container(std::string input) {
  std::string line;

  _exchange.open(EXCHANGE_RATE_DB);

  if (_exchange.fail())
    throw std::invalid_argument("Cannot open file : data.csv");

  for (;std::getline(_exchange, line);) {
    _map_data[line.substr(0, line.find(','))] = std::atof(line.substr(line.find(',') + 1).c_str());
    std::cout << "TEST > " << _map_data[line.substr(0, line.find(','))] << std::endl;
  }

  (_exchange.close(), _input.open(input.c_str()));

  if (_input.fail())
    throw std::invalid_argument("Cannot open file : " +  input);
  for (int i = 0;std::getline(_input, line); i++) {
    if (line.find('|') == std::string::npos) {
      _error_stack.push_back("Error : Bad input => " + line );
    }
    _map_input[line.substr(0, line.find('|'))] = std::atof(line.substr(line.find('|') + 1).c_str());
    std::cout << "TEST INPUT > " << _map_input[line.substr(0, line.find('|'))] << std::endl;
  }
}

void Container::compute() {
  std::map<std::string, float>::iterator it;

  for (it = _map_input.begin(); it != _map_input.end(); it ++) {
    if (it->second > 1000) {
      std::cerr << "error : too large a number." << std::endl;
      continue; 
    } else if (it->second < 0) {
      std::cerr << "error : not a positive number." << std::endl;
      continue;
    } 

    if (_map_data.find(it->first) == _map_data.end()) {
       //TODO: trouver la valeur la plus proche
    }
    // _map_data[it->first]
  }
  
}

Container::~Container() {};
