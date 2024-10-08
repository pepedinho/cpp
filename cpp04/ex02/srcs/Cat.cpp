/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:17:33 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 21:06:29 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal() {
  type = "Cat";
  brain = new Brain();
  std::cout << "Cat was created with success" << std::endl;
}

Cat::Cat(Cat& other) : Animal() {
  std::cout << "Cat copy was created with success !" << std::endl;
  *this = other;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other)
  {
    type = other.type;
    brain = new Brain(*other.brain);
    if (!brain)
      std::cout << "impossible to create a brain from the one received as a parameter" << std::endl;
    std::cout << "Cat was copyed with success" << std::endl;
  }
  return *this;
}

Cat::~Cat(void) {
  delete brain;
  std::cout << "Cat was detroyed with success" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "~~~MIAOUUUUUUUUUUUUUU~~~" << std::endl;
}

std::string Cat::getIdeas(int i) {
  return brain->getIdeas(i);
}

void Cat::inception(std::string idea, int i) {
  brain->inception(idea, i);
}
