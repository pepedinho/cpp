/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:10:24 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 14:14:57 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
  protected:
    std::string name;
    int         hitPoint;
    int         energyPoint;
    int         attackDamage;
  public:
    ClapTrap            (void);
    ClapTrap            (std::string name);
    ClapTrap            (ClapTrap& other);
    ClapTrap& operator= (const ClapTrap& other); // affectation operator
    ~ClapTrap(void);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

# endif
