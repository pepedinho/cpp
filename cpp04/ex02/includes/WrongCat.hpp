/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:26:01 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 19:26:03 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
  public:
    WrongCat(void);
    WrongCat(WrongCat& other);
    WrongCat& operator = (const WrongCat& other);
    ~WrongCat(void);
    void makeSound(void) const;
};

#endif 

