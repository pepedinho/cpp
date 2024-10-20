/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:13:22 by itahri            #+#    #+#             */
/*   Updated: 2024/10/20 23:32:46 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ICharacter.hpp"

ICharacter::ICharacter(void) {
  name = "unknow";
  std::cout << "ICharacter default constructor called" << std::endl;
}

ICharacter::ICharacter(std::string name) : name(name) {
  std::cout << "ICharacter name constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter& other) {
  std::cout << "ICharacter copy constructor called" << std::endl;
  *this = other;
}

ICharacter& ICharacter::operator=(const ICharacter& other) {
  if (this != &other) {
    name = other.name;
  }
  return *this;
}
