/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:28:22 by itahri            #+#    #+#             */
/*   Updated: 2024/10/31 17:32:59 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <cstdlib>
#include <variant>

bool isInt(std::string nbr)
{
  int cnt = 0;

  for (int i = 0; nbr[i]; i++) {
    if ((nbr[i] < '0' || nbr[i] > '9') && nbr[i] != 'f')
      return false;
    if (nbr[i] == 'f')
      cnt = 1;
    if (cnt > 1)
      return false;
  }
  return true;
}

void printFloat(float nb) {
  std::cout << "float: ";
  if (floor(nb) == nb)
    std::cout << std::fixed << std::setprecision(1) << nb << "f" << std::endl;
  else
    std::cout << nb << "f" << std::endl;
}

void printDouble(double nb) {
  std::cout << "double: ";
  if (floor(nb) == nb)
    std::cout << std::fixed << std::setprecision(1) << nb << std::endl;
  else
    std::cout << nb << std::endl;
}

void printInt(int nb) {
  
}

void printChar(char c) {
  std::cout << "char: ";
  if (!std::isprint(c)) {
    std::cout << "Non displayable" << std::endl;
    return;
  }
  std::cout << "'" << c << "'" << std::endl;
}

void floatCase(std::string to_convert) {
  std::stringstream buf;
  float nb;
  buf << to_convert;
  buf >> nb;
  if (buf.fail())
    std::cout << "Error" << std::endl;
}

void ScalarConverter::convert(std::string to_convert) {
  if (!isInt(to_convert))
    std::cout << "Error" << std::endl;
  if (to_convert.find("f") != std::string::npos) {

  } else if (to_convert.find(".") != std::string::npos) {

  }
}
