/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:26:04 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 19:33:50 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon *weapon) {
  this->weapon = weapon;
}

void HumanB::attack(void) {
  if (!weapon)
    std::cout << "has no weapon to attack !" << std::endl;
  else
    std::cout << this->name << " attack with their " << weapon->getType() << std::endl;
}
