/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:23:00 by itahri            #+#    #+#             */
/*   Updated: 2024/10/12 18:14:34 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/PhoneBook.hpp"

int main (void) {
  PhoneBook p_book;
  std::string cmd;
  while (true)
  {
    std::cout << "Enter a command > " << std::flush;
    if (!std::getline(std::cin,cmd)) {
        std::cout << "error" << std::endl;
        break ;
    }
    if (cmd == "EXIT")
      break ;
    else if (cmd == "ADD")
      p_book.add_contact();
    else if (cmd == "SEARCH")
      p_book.search();
  }
  return 0;
}
