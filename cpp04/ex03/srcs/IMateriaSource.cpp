/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:40:15 by itahri            #+#    #+#             */
/*   Updated: 2024/10/22 15:08:14 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IMateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  for (int i = 0; i < 4; i++) {
   stock[i] = NULL;
  }
  std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) {
  *this = other;
  std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource::~MateriaSource() {
  for (int i = 0; i < 4; i++) {
    if (stock[i])
      delete stock[i];
  }
  std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
  if (this != &other) {
    for (int i = 0; i < 4; i++) {
      if (this->stock[i])
        delete stock[i];
      if (other.stock[i]) 
        stock[i] = other.stock[i]->clone();
    }
  }
  return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
  for (int i = 0; i < 4; i++) {
    if (!stock[i]) {
      std::cout << "Stock a Materia " << "(" << m->getType() << ")" << " in memory" << std::endl;
      stock[i] = m->clone();
      return;
    }
  }
  std::cout << "Not enougt space in your brain" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const& type) {
  AMateria* result = get(type);
  if (result)
    return result->clone();
  return 0;
}

AMateria* MateriaSource::get(std::string const& type) {
  if (type  == "ice"){
    for (int i = 0; i < 4; i++) {
      if (stock[i] && stock[i]->getType() == "ice")
        return stock[i];
    }
  } else if (type == "cure") {
    for (int i  = 0; i < 4; i++) {
      if (stock[i] && stock[i]->getType() == "cure")
        return stock[i];
    }
  }
  return NULL;
}

