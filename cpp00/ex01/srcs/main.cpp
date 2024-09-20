/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:23:00 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 23:39:22 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/PhoneBook.hpp"

int main (int argc, char *argv[]) {
  PhoneBook p_book;
  std::string cmd;
  (void)argc;
  (void)argv;
  while (true)
  {
    std::cout << "Enter a command > " << std::flush;
    if (!std::getline(std::cin,cmd)) {
        std::cout << "error\n";
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
