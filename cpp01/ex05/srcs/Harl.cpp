/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:16:23 by itahri            #+#    #+#             */
/*   Updated: 2024/10/01 09:35:57 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void) {};

Harl::~Harl(void) {};

void Harl::debug(void) {
  std::cout << "[DEBUG]" << std::endl;
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info(void) {
  std::cout << "[INFO]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning(void) {
  std::cout << "[WARNING]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
  std::cout << "[ERROR]" << std::endl;
  std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level)
{

  void (Harl::*ptrFunctions[])(void) = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error,
  };

  std::string levels[] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR"
  };
  for (int i = 0; i <= 3; i++) {
    if (levels[i] == level) {
      (this->*ptrFunctions[i])();
      return ;
    }
  }
  std::cout << "What is this level ?" << std::endl;
}
