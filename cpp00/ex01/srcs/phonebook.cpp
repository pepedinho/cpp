/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:46:13 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 23:11:25 by itahri           ###   ########.fr       */
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
    contact[contact_cnt] = new_contact;
    contact_cnt++;
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
  std::cout << "Contact index : ";
  std::cin >> index;
  if (!std::cin) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "invalid input\n";
    return -1;
  }
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  if (index > 8 || index > this->contact_cnt - 1) {
    std::cout << "Error ! : Invalid index" << std::endl;
    return -1;
  }
  return index;
}

std::string PhoneBook::truncate(std::string str)
{
  if (str.length() > 10) {
    std::string tmp = str.substr(0, 9);
    tmp.push_back('.');
    return tmp;
  }
  return str;
}

void PhoneBook::search() {
  for (int i = 0; i <= this->contact_cnt - 1; i++)
    display_contact(this->contact[i], i);
  int index = this->get_search_index();
  if (index >= 0)
    this->display_infos(this->contact[index]);
}

void format_display(std::string str)
{
  static int ite;
  int rest = 10 - str.length();
  int correction;
  for (int i = 0; i < rest / 2; i++)
    std::cout << " ";
  std::cout << str;
  for (int i = 0; i < (rest / 2); i++)
    std::cout << " ";
  correction = ((rest / 2) * 2) + str.length();
  while (correction < 10) {
    std::cout << " ";
    correction++;
  }
  if (ite < 2) {
    std::cout << "|";
    ite++;
  }
  else
    ite = 0;
}

void display_index(int index)
{
  for (int i = 0; i < 4; i++)
    std::cout << " ";
  std::cout << index;
  for (int i = 0; i < 5; i++)
    std::cout << " ";
  std::cout << "|";
}

void PhoneBook::display_contact(Contact contact, int index) {
  std::string f_name = truncate(contact.get_first_name());
  std::string l_name = truncate(contact.get_last_name());
  std::string nick_name = truncate(contact.get_nick_name());
  display_index(index);
  format_display(f_name);
  format_display(l_name);
  format_display(nick_name);
  std::cout << std::endl;
}

void PhoneBook::display_infos(Contact contact)
{
  std::string f_name = contact.get_first_name();
  std::string l_name = contact.get_last_name();
  std::string n_name = contact.get_nick_name();
  std::string phone_number = contact.get_phone_number();
  std::string secret = contact.get_secret();

  std::cout << "First Name : ";
  std::cout << f_name << std::endl;
  std::cout << "Last Name : ";
  std::cout << l_name << std::endl;
  std::cout << "Nickname : ";
  std::cout << n_name << std::endl;
  std::cout << "Phone Number : ";
  std::cout << phone_number << std::endl;
  std::cout << "Secret : ";
  std::cout << secret << std::endl;
}
