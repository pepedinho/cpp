/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:35:48 by itahri            #+#    #+#             */
/*   Updated: 2024/09/26 13:36:59 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main (void) {
  
  Zombie *zomb = newZombie("pepe");
  zomb->announce();
  delete zomb;

  randomChump("paquito");
  return 0;
}
