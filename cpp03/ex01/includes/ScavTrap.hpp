/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:02:44 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 14:20:01 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap  (void);
    ScavTrap  (std::string name);
    ScavTrap  (ScavTrap& other);
    ScavTrap& operator= (const ScavTrap& other);
    void      attack(std::string target);
    void      guardGate(void);
    ~ScavTrap (void);
};

#endif
