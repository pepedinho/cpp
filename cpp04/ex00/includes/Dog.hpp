/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:21:49 by itahri            #+#    #+#             */
/*   Updated: 2024/10/05 17:40:31 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
  public:
    Dog(void);
    Dog(Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog(void);
    void makeSound(void) const;
};

#endif 
