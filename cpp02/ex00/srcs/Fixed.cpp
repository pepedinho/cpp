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

Fixed::Fixed() {
  this->setRawBits(0);
  std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed&) {
  std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed) {
  std::cout << "Copy assignment operator called" << std::endl;
  return *this;
}

Fixed::~Fixed(void) {
  std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
  return this->value;
}

void Fixed::setRawBits(int const raw) {
  this->value = raw;
}
