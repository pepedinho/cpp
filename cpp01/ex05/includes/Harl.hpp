/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:06:26 by itahri            #+#    #+#             */
/*   Updated: 2024/10/01 09:11:16 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl 
{
  private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
  public:
    Harl  (void);
    void  complain(std::string level);
    ~Harl (void);
};

#endif
