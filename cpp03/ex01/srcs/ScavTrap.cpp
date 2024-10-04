/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:09:43 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 11:18:04 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  hitPoint = 100;
  energyPoint = 50;
  attackDamage = 20;
  std::cout << "ScavTrap " << name << " has been invoked" << std::endl;
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
    << "is now in Gate keeper mode"
    << std::endl;
}
