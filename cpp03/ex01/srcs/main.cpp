/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:09:29 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 11:13:07 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int main(void) 
{

  ScavTrap snake("snake");

  snake.attack("ocelot");
  snake.takeDamage(50);
  snake.guardGate();
  snake.beRepaired(20);

}
