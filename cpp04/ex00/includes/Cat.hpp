/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:08:26 by itahri            #+#    #+#             */
/*   Updated: 2024/10/05 17:40:03 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal {
  public:
    Cat(void);
    Cat(Cat& other);
    Cat& operator = (const Cat& other);
    ~Cat(void);
    void makeSound(void) const;
};

#endif 
