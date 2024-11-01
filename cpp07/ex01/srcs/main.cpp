/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:21:55 by itahri            #+#    #+#             */
/*   Updated: 2024/11/01 15:32:53 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

void printz(char& c) {
  std::cout << "'" << c << "' ";
}

void printw(std::string& str) {
  std::cout << "\"" << str << "\" ";
}

int main(void) {
  char array[] = "oui";
  std::string str_array[] = {"Je", "Pense", "Donc", "Je", "Suis"};

  ::iter(array, 3, printz);
  std::cout << std::endl;

  ::iter(str_array, 5, printw);
  std::cout << std::endl;
}
