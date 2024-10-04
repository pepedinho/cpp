/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:09:43 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 14:31:44 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
  name = "unknown";
  hitPoint = 100;
  energyPoint = 50;
  attackDamage = 20;
  std::cout << "ScavTrap" << name << " has been invoked" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  hitPoint = 100;
  energyPoint = 50;
  attackDamage = 20;
  std::cout << "ScavTrap " << name << " has been invoked" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& other) {
  *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  name = other.name;
  hitPoint = other.hitPoint;
  energyPoint = other.energyPoint;
  attackDamage = other.attackDamage;
  return *this;
}

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap " << name << " has been destroyed" << std::endl; 
}

void ScavTrap::attack(std::string target) {
  if (energyPoint <= 0 || hitPoint <= 0)
    return ;
  std::cout 
    << "ScavTrap " 
    << name 
    << " atacks " 
    << target 
    << ", causing " 
    << attackDamage 
    << " points of damage !" 
    << std::endl;
}

void ScavTrap::guardGate(void) {
  std::cout
    << "ScavTrap "
    << name
    << " is now in Gate keeper mode"
    << std::endl;
}
