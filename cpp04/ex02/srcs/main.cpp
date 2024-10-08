/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:27:01 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 21:25:23 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"

int main()
{

  //try to instance animal
  /*Animal *pepe = new Animal();*/
  /*Animal oui = Animal();*/

  std::cout << "-------------------[Mandatory tests 0]----------------------" << std::endl;
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;//should not create a leak
  delete i;
  std::cout << "-------------------[Mandatory tests 1]----------------------" << std::endl;
  std::cout << "~~~~~~~~~~~~~~~[INIT]~~~~~~~~~~~~~~~" << std::endl;
  Animal *animals[10];
  for (int i = 0; i < 10; i++) {
    std::cout << "[" << i << "] ";
    if (i < 5)
      animals[i] = new(std::nothrow) Cat();
    else
      animals[i] = new(std::nothrow) Dog();
    if (!animals[i]) {
      for (int j = 0; j < i; j++) {delete animals[j];}
      std::cout << "Memory alloctation error" << std::endl;
      return 1;
    }
  }

  std::cout << "~~~~~~~~~~~~~~~[COPY]~~~~~~~~~~~~~~~" << std::endl;
  dynamic_cast<Cat*>(animals[0])->inception("Big boss is a one man army", 0);
  dynamic_cast<Dog*>(animals[5])->inception("Ocelot is the best gun shooter", 0);
  
  Cat* catCopy = new Cat(*dynamic_cast<Cat*>(animals[0]));
  if (!catCopy) {
    std::cout << "Memory alloctation error" << std::endl;
    for (int i = 0; i < 10; i++) {delete animals[i];}
    return 1;
  }
  Dog* dogCopy = new Dog(*dynamic_cast<Dog*>(animals[5]));
  if (!dogCopy) {
    for (int i = 0; i < 10; i++) {delete animals[i];}
    delete catCopy;
    std::cout << "Memory alloctation error" << std::endl;
    return 1;
  }

  std::cout << "~~~~~~~~~~~~~~~[ACTIONS]~~~~~~~~~~~~~~~" << std::endl;
  for (int i = 0; i < 10; i++) {
    animals[i]->makeSound();
    if (i == 0)
      std::cout << dynamic_cast<Cat*>(animals[i])->getIdeas(0) << std::endl;
    if (i == 5)
      std::cout << dynamic_cast<Dog*>(animals[i])->getIdeas(0) << std::endl;
  }

  std::cout << "~~~~~~~~~~~~~~~[CLEAR]~~~~~~~~~~~~~~~" << std::endl;
  for (int i = 0; i  < 10; i++) {delete animals[i];}
  delete catCopy;
  delete dogCopy;
  return 0;
}


