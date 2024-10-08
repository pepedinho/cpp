/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:09:29 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 11:38:20 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(void) 
{
  std::cout
    << "----------------------------clap------------------------------"
    << std::endl;

  ClapTrap pepe("pepe");

  pepe.attack("moussa");
  pepe.takeDamage(5);
  pepe.beRepaired(3);

  std::cout
    << "-----------------------------scav-----------------------------"
    << std::endl;

  ScavTrap snake("snake");

  snake.attack("pepe");
  snake.takeDamage(50);
  snake.guardGate();
  snake.beRepaired(20);

  std::cout
    << "------------------------------frag----------------------------"
    << std::endl;

  FragTrap ocelot("ocelot");

  ocelot.attack("snake");
  ocelot.takeDamage(34);
  ocelot.highFiveGuys();
  ocelot.beRepaired(15);

  std::cout
    << "----------------------------destroy----------------------------"
    << std::endl;
}
