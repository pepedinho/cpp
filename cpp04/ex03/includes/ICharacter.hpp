/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:20:33 by itahri            #+#    #+#             */
/*   Updated: 2024/10/22 12:30:24 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>

class AMateria;

class ICharacter
{
  public:
    virtual ~ICharacter() {}
    virtual std::string const & getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter 
{
  private:
    AMateria* inventory[4];
    std::string name;
  public:
    Character(void);
    Character(std::string name);
    Character(const Character& other);
    Character& operator=(const Character& other);
    ~Character();
    std::string const &getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif 
