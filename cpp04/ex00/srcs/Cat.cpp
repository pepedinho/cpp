/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:17:33 by itahri            #+#    #+#             */
/*   Updated: 2024/10/05 18:08:37 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void) {
  type = "Cat";
  std::cout << "Cat was created with success" << std::endl;
}

Cat::Cat(Cat& other) {
  *this = other;
}

Cat& Cat::operator=(const Cat& other) {
  type = other.type;
  std::cout << "Cat was copyed with success" << std::endl;
  return *this;
}

Cat::~Cat(void) {
  std::cout << "Dog was detroyed with success" << std::endl;
}

void Cat::makeSound(void) const {
  std::cout << "~~~MIAOUUUUUUUUUUUUUU~~~" << std::endl;
}
