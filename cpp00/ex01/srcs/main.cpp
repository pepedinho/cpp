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
  (void)argc;
  (void)argv;
  p_book.add_contact();
  p_book.search();
  return 0;
}
