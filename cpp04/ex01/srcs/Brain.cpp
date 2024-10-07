/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:08:52 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 21:25:43 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void) {
  std::cout << "Brain has been constructed" << std::endl;
}

Brain::Brain(Brain& other) {
  *this = other;
  std::cout << "Brain copy has been constructed" << std::endl;
}

Brain& Brain::operator=(Brain& other) {
  for (int i = 0; i < 100 ; i++) {
    this->ideas[i] = other.ideas[i];
  }
  return *this;
}

Brain::~Brain(void) {
  std::cout << "Brain was detroyed with succes !" << std::endl;
}

std::string Brain::getIdeas(int i) {
  if (i > 99)
    return NULL;
  return ideas[i];
}

void Brain::inception(std::string idea, int i) {
  if (i > 99)
    return ;
  this->ideas[i] = idea;
}
