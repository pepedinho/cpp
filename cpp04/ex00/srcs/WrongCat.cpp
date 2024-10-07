/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:30:06 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 19:30:29 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() {
  type = "WrongCat";
  std::cout << "WrongCat was created with success" << std::endl;
}

WrongCat::WrongCat(WrongCat& other) : WrongAnimal() {
  *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
  type = other.type;
  std::cout << "WrongCat was copyed with success" << std::endl;
  return *this;
}

WrongCat::~WrongCat(void) {
  std::cout << "WrongCat was detroyed with success" << std::endl;
}

void WrongCat::makeSound(void) const {
  std::cout << "¤¤¤MEEHHHHHHH¤¤¤" << std::endl;
}
