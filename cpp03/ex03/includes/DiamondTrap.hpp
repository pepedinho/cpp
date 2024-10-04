/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:12:52 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 15:56:07 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
  private:
    std::string name;
  public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap& other);
    DiamondTrap& operator= (DiamondTrap& other);
    ~DiamondTrap(void);
    void attack(std::string target);
};

#endif
