/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:24:50 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 21:17:15 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal() {
  type = "Dog";
  brain = new Brain();
  std::cout << "Dog was created with success" << std::endl;
}

Dog::Dog(Dog& other) : Animal() {
  std::cout << "Dog copy was created with success !" << std::endl;
  *this = other;
}

Dog& Dog::operator=(const Dog& other) {
  if (this != &other)
  {
    type = other.type;
    brain = new Brain(*other.brain);
    if (!brain)
      std::cout << "impossible to create a brain from the one received as a parameter" << std::endl;
    std::cout << "Dog was copyed with success" << std::endl;
  }
  return *this;
}

Dog::~Dog(void) {
  delete brain;
  std::cout << "Dog was detroyed with success" << std::endl;
}

void Dog::makeSound(void) const {
  std::cout << "****WAF WAF WAF****" << std::endl;
}

std::string Dog::getIdeas(int i) {
  return brain->getIdeas(i);
}

void Dog::inception(std::string idea, int i) {
  brain->inception(idea, i);
}
