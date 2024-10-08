/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:11:12 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 20:35:36 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void) : type("") {
  std::cout << "Animal was created with success" << std::endl;
}

Animal::Animal(Animal& other) {
  *this = other;
}

Animal& Animal::operator=(const Animal& other) {
  if (this != &other) {
    type = other.type;
    std::cout << "Animal was copyed with success" << std::endl;
  }
  return *this;
}

Animal::~Animal(void) {
  std::cout << "Animal was detroyed with success" << std::endl;
}

void Animal::makeSound(void) const {
  std::cout << "[-_-]" << std::endl;
  std::cout << " \\|/" << std::endl;
  std::cout << " / \\" << std::endl;
}

std::string Animal::getType(void) const {
  return type;
}
