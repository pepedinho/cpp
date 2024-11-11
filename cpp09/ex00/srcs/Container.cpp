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

Container::Container(std::string filename) {
  std::map<std::string, int> map;
  std::ifstream file; 
  std::string line;

  file.open(filename.c_str());

  if (file.fail())
    throw std::invalid_argument("Cannot open file : " + filename);

  for (;std::getline(file, line);) {
    map[line.substr(0, line.find(','))] = std::atoi(line.substr(line.find(',') + 1).c_str());
    std::cout << "debug : " << map[line.substr(0, line.find(','))] << std::endl;
  }
}

Container::~Container() {};
