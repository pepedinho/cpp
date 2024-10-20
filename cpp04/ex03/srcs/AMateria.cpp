/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:30:04 by itahri            #+#    #+#             */
/*   Updated: 2024/10/09 15:49:21 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

// ABSTRACT

AMateria::AMateria(void) {
  type = "unknown";
  std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) {
  this->type = type;
  std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other) {
  *this = other;
  std::cout << "AMateria copy constructor called" << std::endl;
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

// ICE

Ice::Ice(void) : AMateria() {
  type = "ice";
  std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other) {
  std::cout << "Ice copy constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& other) {
  if (this != &other) {
    AMateria::operator=(other);
  }
  return *this;
}

AMateria* Ice::clone() const {
  Ice* result = new Ice(*this);
  return result;
}

void Ice::use(ICharacter& target) {
  std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;
}

// CURE

Cure::Cure(void) : AMateria() {
  type = "cure";
  std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other) {
  std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other) {
  if (this != &other)
    AMateria::operator=(other);
  return *this;
}

AMateria* Cure::clone() const {
  return new Cure(*this);
}
