/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:34:53 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 14:40:34 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie *zombieHord(int N, std::string name)
{
  if (N <= 0)
    return NULL;
  Zombie *hord = new Zombie[N];
  for (int i = 0; i < N; i++) {
    hord[i].assign_name(name);
    hord[i].announce();
  }
  return hord;
}
