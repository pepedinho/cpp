/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:20:33 by itahri            #+#    #+#             */
/*   Updated: 2024/10/20 23:28:57 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>

class AMateria;

class ICharacter
{
  protected:
    std::string name;
  public:
    ICharacter(void);
    ICharacter(std::string name);
    ICharacter(const ICharacter& other);
    ICharacter& operator=(const ICharacter& other);
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
  public:
    Character(void);
    Character(const Character& other);
    Character& operator=(const Character& other);
    void equip(AMateria* m) = 0;
    void unequip(int idx) = 0;
    void use(int idx, ICharacter& target);
};
#endif 
