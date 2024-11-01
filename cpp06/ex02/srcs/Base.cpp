/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:33:21 by itahri            #+#    #+#             */
/*   Updated: 2024/11/01 14:52:27 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"
#include "../includes/A.hpp"
#include "../includes/B.hpp"
#include "../includes/C.hpp"

Base::~Base() {}

Base *generate(void) {
  int rng = std::rand() % 3;

  switch (rng) {
    case 0:
      return new A();
    case 1:
      return new B();
    case 2:
      return new C();
  }
  return NULL;
}

void identify(Base* p) {
  if (dynamic_cast<A*>(p))
    std::cout << "Type of p is A" << std::endl;
  else if (dynamic_cast<B*>(p))
    std::cout << "Type of p is B" << std::endl;
  else if (dynamic_cast<C*>(p))
    std::cout << "Type of p is C" << std::endl;
  else 
    std::cout << "Impossible to identify this type :/" << std::endl;
}

void identify(Base& p) {
  try {
    (void)dynamic_cast<A&>(p);
    std::cout << "Type of p is A" << std::endl;
  } catch (...) {
    try {
      (void)dynamic_cast<B&>(p); 
      std::cout << "Type of p is B" << std::endl;
    } catch (...) {
      try {
        (void)dynamic_cast<C&>(p); 
        std::cout << "Type of p is C" << std::endl;
      } catch (...) {
        std::cout << "Impossible to identify this type :/" << std::endl;
      }
    }
  }
}
