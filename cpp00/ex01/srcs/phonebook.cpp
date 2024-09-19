/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:46:13 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 23:43:04 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
  this->contact_cnt = 0;
}

void PhoneBook::add_contact() {
  Contact new_contact;
  new_contact.create_contact();
  increase_date();
  if (contact_cnt >= 8)
    contact[this->get_older()] = new_contact;
  else {
    contact_cnt++;
    contact[contact_cnt] = new_contact;
  }
}

void PhoneBook::increase_date() {
  for (int i = 0; i < contact_cnt; i++) {
    contact[i].inc_date();
  }
}

int PhoneBook::get_older() {
  int tmp = contact[0].get_date();
  int i = 0;

  while  (i < contact_cnt) {
    if (contact[i].get_date() > tmp)
      tmp = contact[i].get_date();
    i++;
  }
  return tmp;
}

int PhoneBook::get_search_index() {
  int index;
  std::cout << "index : ";
  std::cin >> index;
  return index;
}

std::string PhoneBook::truncate(std::string str)
{
  if (str.length() > 10)
    return str.substr(0, 10);
  return str;
}

void PhoneBook::search() {
  display_info(this->contact[this->get_search_index()]);
}

void PhoneBook::display_info(Contact contact) {
  std::string f_name = truncate(contact.get_first_name());
  std::string l_name = truncate(contact.get_last_name());
  std::string nick_name = truncate(contact.get_nick_name());
  std::cout << f_name;
  std::cout << " | ";
  std::cout << l_name;
  std::cout << " | ";
  std::cout << nick_name;
  std::cout << " | ";
}
