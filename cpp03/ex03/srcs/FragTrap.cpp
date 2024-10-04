/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:27:02 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 15:35:16 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
  name = "unknown";
  hitPoint = 100;
  energyPoint = 100;
  attackDamage = 30;
  std::cout 
    << "FragTrap "
    << name
    << " has been invoked"
    << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  hitPoint = 100;
  energyPoint = 50;
  attackDamage = 20;
  std::cout
    << "FragTrap "
    << name
    << " has been invoked"
    << std::endl;
}

FragTrap::FragTrap(FragTrap& other) {
  *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  name = other.name;
  hitPoint = other.hitPoint;
  energyPoint = other.energyPoint;
  attackDamage = other.attackDamage;
  return *this;
}

FragTrap::~FragTrap(void) {
  std::cout
    << "FragTrap "
    << name
    << " has been destroyed"
    << std::endl;
}

void FragTrap::highFiveGuys(void) {
  std::cout
    << "Give me a high five brother"
    << std::endl;
}
