/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:35:48 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 14:45:45 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main (void) {
  
  Zombie *horde;

  std::cout << "0 Zombie -_-_-_-_-_-_-_-_-_-_-_-_ 0 Zombie" << std::endl;
  horde = zombieHord(0, "pedro");
  if (horde)
    delete [] horde;
  std::cout << "5 Zombie -_-_-_-_-_-_-_-_-_-_-_-_ 5 Zombie" << std::endl;
  horde = zombieHord(5, "paquito");
  if (horde)
    delete [] horde;
  std::cout << "10 Zombie -_-_-_-_-_-_-_-_-_-_-_-_ 10 Zombie" << std::endl;
  horde = zombieHord(10, "pablito");
  if (horde)
    delete [] horde;
  return 0;
}
