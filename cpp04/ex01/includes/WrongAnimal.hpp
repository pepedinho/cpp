/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:22:59 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 19:23:16 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
  protected:
    std::string type;
  public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal& other);
    WrongAnimal& operator = (const WrongAnimal& other);
    virtual ~WrongAnimal(void);
    virtual void makeSound(void) const;
    virtual std::string getType(void) const;
};

#endif
