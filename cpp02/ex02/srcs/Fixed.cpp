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

/************************************************************************************/
/*                                                                                  */
/*                             CONSTRUCTOR/DESTRUCTOR                               */
/*                                                                                  */
/************************************************************************************/

// Constructor
Fixed::Fixed() {
  value = 0;
};

// Copy constructor
Fixed::Fixed(const Fixed& src) {
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

// Destructor
Fixed::~Fixed(void) {
}


/************************************************************************************/
/*                                                                                  */
/*                                     METHODES                                     */
/*                                                                                  */
/************************************************************************************/


float Fixed::toFloat(void) const {
  return (float)value / (1 << b);
}

int Fixed::toInt(void) const {
  return roundf(toFloat());
}

int Fixed::getRawBits(void) const {
  return this->value;
}

void Fixed::setRawBits(int const raw) {
  this->value = raw;
}

Fixed Fixed::min(Fixed& a, Fixed& b) {
  if (a > b)
    return b;
  return a;
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b) {
  if (a > b)
    return b;
  return a;
}

Fixed Fixed::max(Fixed &a, Fixed &b) {
  if (a > b)
    return a;
  return b;
}

const Fixed Fixed::max(const Fixed &a, const Fixed &b) {
  if (a > b)
    return a;
  return b;
}

/************************************************************************************/
/*                                                                                  */
/*                                  OPERATOR OVERLOAD                               */
/*                                                                                  */
/************************************************************************************/

// Surcharge d'operateur d'affectation
Fixed& Fixed::operator=(const Fixed& other) {
  if (this != &other)
    this->value = other.getRawBits();
  return *this;
}

bool Fixed::operator<(const Fixed& other) const {
  return value > other.value;
}

bool Fixed::operator<=(const Fixed& other) const {
  return value <= other.value;
}

bool Fixed::operator>(const Fixed& other) const {
  return value > other.value;
}

bool Fixed::operator>=(const Fixed& other) const {
  return value >= other.value;
}

bool Fixed::operator==(const Fixed& other) const {
  return value == other.value;
}

bool Fixed::operator!=(const Fixed& other) const {
  return value != other.value;
}

Fixed Fixed::operator+(const Fixed& other) {
  value += other.value;
  return *this;
}

Fixed Fixed::operator-(const Fixed& other) {
  value -= other.value;
  return *this;
}

Fixed Fixed::operator/(const Fixed& other) {
  value /= other.value / (1 << b);
  return *this;
}

Fixed Fixed::operator*(const Fixed& other) {
  value *= other.value / (1 << b);
  return *this;
}

Fixed& Fixed::operator++() {
  value++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  ++*this;
  return temp;
}

Fixed& Fixed::operator--() {
  value--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp;
  --*this;
  return tmp;
}
