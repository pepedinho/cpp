/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:08:26 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 20:59:42 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
  private: 
    Brain* brain;
  public:
    Cat(void);
    Cat(Cat& other);
    Cat& operator = (const Cat& other);
    ~Cat(void);
    void makeSound(void) const;
    std::string getIdeas(int i);
    void inception(std::string idea, int i);
};

#endif 
