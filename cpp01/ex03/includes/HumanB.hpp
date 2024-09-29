/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:27:27 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 15:36:08 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanB {
private:
  Weapon      weapon;
  std::string name;
public:
  HumanB      ( std::string name );
  void attack ( void );
};

# endif

