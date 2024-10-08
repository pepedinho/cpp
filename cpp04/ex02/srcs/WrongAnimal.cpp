/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:28:44 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 19:28:46 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("") {
  std::cout << "WrongAnimal was created with success" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& other) {
  *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
  type = other.type;
  std::cout << "WrongAnimal was copyed with success" << std::endl;
  return *this;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "WrongAnimal was detroyed with success" << std::endl;
}

void WrongAnimal::makeSound(void) const {
  std::cout << " \\ /" << std::endl;
  std::cout << " /|\\" << std::endl;
  std::cout << "[_-_]" << std::endl;
}

std::string WrongAnimal::getType(void) const {
  return type;
}
