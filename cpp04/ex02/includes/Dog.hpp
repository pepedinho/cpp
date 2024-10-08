/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:21:49 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 20:59:17 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
  private:
    Brain* brain;
  public:
    Dog(void);
    Dog(Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog(void);
    void makeSound(void) const;
    std::string getIdeas(int i);
    void inception(std::string idea, int i);
};

#endif 
