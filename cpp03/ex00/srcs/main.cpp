/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:09:29 by itahri            #+#    #+#             */
/*   Updated: 2024/10/03 17:50:50 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void) 
{
  ClapTrap pepe("pepe");

  pepe.attack("moussa");
  pepe.takeDamage(5);
  pepe.beRepaired(3);

}
