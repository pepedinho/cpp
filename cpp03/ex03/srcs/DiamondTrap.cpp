/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:22:09 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 15:56:45 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"


DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
  name = ClapTrap::name + "_clap_name";
  hitPoint = FragTrap::hitPoint;
  energyPoint = ScavTrap::energyPoint;
  attackDamage = FragTrap::attackDamage;
} 

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name) {
  name = ClapTrap::name;
  hitPoint = FragTrap::hitPoint;
  energyPoint = ScavTrap::energyPoint;
  attackDamage = FragTrap::attackDamage;
  std::cout
    << "DiamondTrap "
    << name
    << " has been created with success !"
    << std::endl;
  std::cout
    << energyPoint
    << " "
    << attackDamage
    << " "
    <<hitPoint
    << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& other) {
  *this = other;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other) {
  name = other.name;
  hitPoint = other.hitPoint;
  energyPoint = other.energyPoint;
  attackDamage = other.attackDamage;
  return *this;
}

DiamondTrap::~DiamondTrap(void) {
std::cout
  << "DiamondTrap "
  << name
  << " has been destroyed"
  << std::endl;
}

void DiamondTrap::attack(std::string target) {
  ScavTrap::attack(target);
}
