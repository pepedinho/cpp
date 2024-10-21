/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:13:22 by itahri            #+#    #+#             */
/*   Updated: 2024/10/20 23:32:46 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"
#include "../includes/AMateria.hpp"

//ICHARACTER

ICharacter::ICharacter(void) {
  name = "unknow";
  std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(std::string name) : name(name) {
  std::cout << "ICharacter name constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter& other) {
  *this = other;
  std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter& ICharacter::operator=(const ICharacter& other) {
  if (this != &other) {
    name = other.name;
  }
  return *this;
}

//CHARACTER

Character::Character(void) : ICharacter() {
  for (int i = 0; i < 4; i++) {
    inventory[i] = NULL;
  }
  std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string name) : ICharacter(name) {
  for (int i = 0; i < 4; i++) {
    inventory[i] = NULL;
  }
  std::cout << "Character name constructor called" << std::endl;
}

Character::Character(const Character& other) : ICharacter(other) {
  *this = other;
  std::cout << "Character copy constructor called" << std::endl;
}

Character::~Character(void) {
  for (int i = 0; i < 4; i++) {
    if (inventory[i])
      delete inventory[i];
  }
  std::cout << "Character destructor called" << std::endl;
}

//TODO: deep copy with AMateria copy constructor
Character& Character::operator=(const Character& other) {
  if (this != &other) { //check
    ICharacter::operator=(other); //call parent/abstract class operator;
    for (int i = 0; i < 4; i++) {
      inventory[i] = other.inventory[i]; // add additional data;
    }
    name = other.name;
  }
  return *this;
}


std::string const & Character::getName(void) const {
  return name;
}

void Character::equip(AMateria* m) {
  for (int i = 0; i < 4; i++) {
    if (!inventory[i]) {
      std::cout << name << " has equip a " << m->getType() << std::endl;
      inventory[i] = m;
      return;
    }
  }
  std::cout << name << " Try to equip a Materia but inventory is full " << std::endl;
}

void Character::unequip(int idx) {
  if (inventory[idx]) {
    std::cout << name << " has unequip a " << inventory[idx]->getType() << std::endl;
    inventory[idx] = NULL;
    return;
  }
  std::cout << name << " try to unequip a Materia but nothing at index " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target) {
  if (inventory[idx]) {
    inventory[idx]->use(target);
    inventory[idx] = NULL;
    return;
  }
  std::cout << name << " try to use a Materia but nothing at index " << idx << std::endl;
}
