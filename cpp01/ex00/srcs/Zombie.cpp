/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:26:39 by itahri            #+#    #+#             */
/*   Updated: 2024/09/26 14:14:05 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) {
  this->name = name;
}

Zombie::~Zombie( void ) {
  std::cout << this->name << ": " << "has been destroyed" << std::endl;
}

void Zombie::announce( void ) {
  std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
