/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:26:40 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 17:39:29 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA {
private:
  std::string name;
  Weapon      weapon;
public:
  HumanA      (std::string name, Weapon &weapon);
  void        attack( void );
  ~HumanA     ( void );
};

# endif
