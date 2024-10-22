/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:06:21 by itahri            #+#    #+#             */
/*   Updated: 2024/10/22 15:16:51 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/IMateriaSource.hpp"

/*int main(void) {*/
/*  AMateria *stock[4];*/
/**/
/**/
/*  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Init Materia]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;*/
/*  for (int i = 0; i < 4; i++) {*/
/*    std::cout << "--[" << i << "]--" << std::endl;*/
/*    if (i % 2)*/
/*      stock[i] = new Ice();*/
/*    else*/
/*      stock[i] = new Cure();*/
/*  }*/
/**/
/*  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Init Character]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;*/
/*  ICharacter *c1 = new Character("pepe");*/
/*  ICharacter *c2 = new Character("jojo");*/
/**/
/*  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Equip Materia to pepe]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;*/
/*  for (int i = 0; i < 4; i++) {*/
/*    c1->equip(stock[i]);*/
/*  }*/
/**/
/*  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Try to re equip Materia to pepe]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;*/
/*  for (int i = 0; i < 4; i++) {*/
/*    c1->equip(stock[i]);*/
/*  }*/
/**/
/*  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Pepe use Materia on jojo]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;*/
/*  c1->use(1, *c2);*/
/*  c1->use(2, *c2);*/
/*  c1->use(1, *c2);*/
/**/
/*  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Pepe unequip some Materia]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;*/
/*  c1->unequip(0);*/
/*  c1->unequip(1);*/
/*  c1->unequip(2);*/
/*  c1->unequip(3);*/
/**/
/*  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Destroy Materia]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;*/
/*  for (int i = 0; i < 4; i++)*/
/*    delete stock[i];*/
/*  std::cout << "-_-_-_-_-_-_-_-_-_-_-_-_-_-[Destroy Character]-_-_-_-_-_-_-_-_-_-_-_-_-_-" << std::endl;*/
/*  delete c1;*/
/*  delete c2;*/
/*  return 0;*/
/*}*/

int main()
{
  IMateriaSource* src = new MateriaSource();
  AMateria *buff = new Ice();
  AMateria *beef = new Cure();
  src->learnMateria(buff);
  src->learnMateria(beef);
  ICharacter* me = new Character("me");
  AMateria* tmp;
  AMateria* tmp_save;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp_save = tmp;
  tmp = src->createMateria("cure");
  me->equip(tmp);
  ICharacter* bob = new Character("bob");
  me->use(0, *bob);
  me->use(1, *bob);
  delete tmp_save;
  delete tmp;
  delete beef;
  delete buff;
  delete bob;
  delete me;
  delete src;
  return 0;
}
