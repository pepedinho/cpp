/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:30:04 by itahri            #+#    #+#             */
/*   Updated: 2024/10/08 13:40:07 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"


AMateria::AMateria(void) {
  type = "unknown";
  std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
  this->type = type;
  std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(AMateria& other) {
  *this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
  if (this != &other) {
    type = other.type;
  }
  return *this;
}

std::string const& AMateria::getType(void) const {
  return type;
}




