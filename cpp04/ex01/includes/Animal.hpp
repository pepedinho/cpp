/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:06:04 by itahri            #+#    #+#             */
/*   Updated: 2024/10/05 17:34:44 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
  protected:
    std::string type;
  public:
    Animal(void);
    Animal(Animal& other);
    Animal& operator = (const Animal& other);
    virtual ~Animal(void);
    virtual void makeSound(void) const;
    virtual std::string getType(void) const;
};

#endif
