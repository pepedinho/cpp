/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:22:21 by itahri            #+#    #+#             */
/*   Updated: 2024/09/26 14:09:32 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class Zombie {
private:
  std::string name;

public:
  Zombie(std::string name);
  ~Zombie( void );
  void announce( void );
  void assign_name( std::string name );
};


Zombie *newZombie(std::string name);
void randomChump(std::string name);
