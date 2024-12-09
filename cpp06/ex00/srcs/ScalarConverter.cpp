/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:28:22 by itahri            #+#    #+#             */
/*   Updated: 2024/12/09 13:33:17 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"
#include <cstdlib>
#include <variant>

/*bool isInt(std::string nbr)*/
/*{*/
/*  int cnt = 0;*/
/**/
/*  for (int i = 0; nbr[i]; i++) {*/
/*    if ((nbr[i] < '0' || nbr[i] > '9') && nbr[i] != 'f')*/
/*      return false;*/
/*    if (nbr[i] == 'f')*/
/*      cnt = 1;*/
/*    if (cnt > 1)*/
/*      return false;*/
/*  }*/
/*  return true;*/
/*}*/

bool valueCheck(std::string str) {
  //gestion des cas speciaux
  if (str != "+inf" && str != "-inf" && str != "nan") 
		return true;
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "inf" || str == "+inf") {
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf") {
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	if (str == "nan") {
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	return false;
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
  std::cout << "int: ";
  std::cout << nb << std::endl;
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
  else {
    printChar(static_cast<char>(nb));
    printInt(static_cast<int>(nb));
    printFloat(nb);
    printDouble(static_cast<double>(nb));
  }
}

void intCase(std::string to_convert) {
  std::stringstream buf;
  int nb;
  buf << to_convert;
  buf >> nb;
  if (buf.fail())
    std::cout << "Error" << std::endl;
  else {
    printChar(static_cast<char>(nb));
    printInt(nb);
    printFloat(static_cast<float>(nb));
    printDouble(static_cast<double>(nb));
  }
}

void doubleCase(std::string to_convert) {
  std::stringstream buf;
  double nb;
  buf << to_convert;
  buf >> nb;
  if (buf.fail())
    std::cout << "Error" << std::endl;
  else {
    printChar(static_cast<char>(nb));
    printInt(static_cast<int>(nb));
    printFloat(static_cast<float>(nb));
    printDouble(nb);
  }
}

void ScalarConverter::convert(std::string to_convert) {
  /*if (!isInt(to_convert))*/
  /*  std::cout << "Error" << std::endl;*/
  if (!valueCheck(to_convert)) {
    return;
  } else if (to_convert.find("f") != std::string::npos) {
    floatCase(to_convert);
  } else if (to_convert.find(".") != std::string::npos) {
    doubleCase(to_convert);
  } else {
    intCase(to_convert);
  }
}
