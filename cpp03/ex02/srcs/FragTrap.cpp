/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:27:02 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 11:40:24 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
  this->name = name;
  hitPoint = 100;
  energyPoint = 100;
  attackDamage = 30;
  std::cout 
    << "FragTrap "
    << name
    << " has been invoked"
    << std::endl;
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
