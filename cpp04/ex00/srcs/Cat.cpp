/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:17:33 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 21:38:15 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) : Animal() {
  type = "Cat";
  std::cout << "Cat was created with success" << std::endl;
}

Cat::Cat(Cat& other) : Animal() {
  *this = other;
}

Cat& Cat::operator=(const Cat& other) {
  if (this != &other) {
    type = other.type;
    std::cout << "Cat was copyed with success" << std::endl;
  }
  return *this;
}

Cat::~Cat(void) {
  std::cout << "Cat was detroyed with success" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "~~~MIAOUUUUUUUUUUUUUU~~~" << std::endl;
}
