/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:20:47 by itahri            #+#    #+#             */
/*   Updated: 2024/11/01 14:48:19 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <string>

class Base {
  public:
    virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
