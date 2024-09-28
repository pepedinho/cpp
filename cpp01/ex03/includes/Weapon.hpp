/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:27:46 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 15:31:17 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP 
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
  std::string type;

public:
  Weapon ();
  std::string &getType( void );
  void setType( std::string type );
};

# endif
