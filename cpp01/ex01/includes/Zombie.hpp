/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:22:21 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 14:36:11 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
private:
  std::string name;

public:
  Zombie  ();
  void    announce( void );
  void    assign_name( std::string name );
  ~Zombie ( void );
};

Zombie *zombieHord(int N, std::string name);

#endif
