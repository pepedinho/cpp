/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:23:00 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 23:33:21 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
# include "../includes/PhoneBook.hpp"

int main (int argc, char *argv[]) {
  PhoneBook p_book;

  p_book.add_contact();
  p_book.search();
  return 0;
}
