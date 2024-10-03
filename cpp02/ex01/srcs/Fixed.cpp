/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:35:58 by itahri            #+#    #+#             */
/*   Updated: 2024/10/01 12:00:32 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

// Constructor
Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  value = 0;
};

// Copy constructor
Fixed::Fixed(const Fixed& src) {
  std::cout << "Copy constructor called" << std::endl;
  *this = src;
}

// const int constructor
Fixed::Fixed(const int n) {
  value = n  * (1 << b);
}

//const float constructor
Fixed::Fixed(const float f) {
  value = f * (1 << b);
}

// Surcharge d'operateur d'affectation
Fixed& Fixed::operator=(const Fixed& other) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other)
    this->value = other.getRawBits();
  return *this;
}

// Destructor
Fixed::~Fixed(void) {
  std::cout << "Destructor called" << std::endl;
}


float Fixed::toFloat(void) const {
  return (float)value / (1 << b);
}

int Fixed::toInt(void) const {
  return roundf(toFloat());
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return this->value;
}

void Fixed::setRawBits(int const raw) {
  this->value = raw;
}
