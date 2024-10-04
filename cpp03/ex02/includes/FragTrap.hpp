/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 11:23:20 by itahri            #+#    #+#             */
/*   Updated: 2024/10/04 14:24:47 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
  public:
    FragTrap  (void);
    FragTrap  (std::string name);
    FragTrap  (FragTrap& other);
    FragTrap& operator= (const FragTrap& other);
    ~FragTrap (void);
    void highFiveGuys(void);
};

#endif
