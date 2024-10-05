/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:18:09 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 14:13:59 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
  name = "unknown";
  hitPoint = 10;
  energyPoint = 10;
  attackDamage = 0;
  std::cout << "ClapTrap " << name << " has been invoked" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
  this->name = name;
  hitPoint = 10;
  energyPoint = 10;
  attackDamage = 0;
  std::cout << "ClapTrap " << name << " has been invoked" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& other) {
  *this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  name = other.name;
  hitPoint = other.hitPoint;
  energyPoint = other.energyPoint;
  attackDamage = other.attackDamage;
  return *this;
}

ClapTrap::~ClapTrap(void) {
  std::cout << name << " has been destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
  if (energyPoint <= 0 || hitPoint <= 0)
    return ;
  std::cout 
    << "ClapTrap " 
    << name 
    << " atacks " 
    << target 
    << ", causing " 
    << attackDamage 
    << " points of damage !" 
    << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  hitPoint -= amount;
  std::cout
    << "ClapTrap "
    << name
    << " take "
    << amount
    << " damages"
    << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  hitPoint += amount;
  std::cout
    << "ClapTrap "
    << name
    << " was repaired for an amount of "
    << amount
    << " hit points"
    << std::endl;
}

