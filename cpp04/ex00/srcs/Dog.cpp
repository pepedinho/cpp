/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:24:50 by itahri            #+#    #+#             */
/*   Updated: 2024/10/05 18:08:31 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal() {
  type = "Dog";
  std::cout << "Dog was created with success" << std::endl;
}

Dog::Dog(Dog& other) : Animal() {
  *this = other;
}

Dog& Dog::operator=(const Dog& other) {
  type = other.type;
  std::cout << "Dog was copyed with success" << std::endl;
  return *this;
}

Dog::~Dog(void) {
  std::cout << "Dog was detroyed with success" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "****WAF WAF WAF****" << std::endl;
}
