/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:29:21 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 17:36:05 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon (std::string type) : type(type) {}

Weapon::~Weapon (void) {}

const std::string &Weapon::getType (void) {
  const std::string &type = this->type;
  return type;
}

void Weapon::setType(std::string type) {
  this->type = type;
}
