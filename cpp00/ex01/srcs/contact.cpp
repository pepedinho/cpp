/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 22:52:32 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 23:43:07 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() {

}

std::string Contact::get_first_name() {
  return this->first_name;
}

std::string Contact::get_last_name() {
  return this->last_name;
}

std::string Contact::get_nick_name() {
  return this->nick_name;
}

std::string Contact::get_phone_number() {
  return this->phone_number;
}

std::string Contact::get_secret() {
  return this->darkest_secret;
}

int Contact::get_date() {
  return this->date;
}

void Contact::inc_date() {
  this->date++;
}

std::string read_input(void) 
{
  std::string input;

  std::cin.clear();
  std::getline(std::cin, input);
  if (std::cin.eof()) {
    std::cin.clear();
    std::cout << "error" << std::endl;
    input = "NULL";
  }
  return (input);
}

bool check_number(std::string phone_number)
{
  if (phone_number == "NULL")
    return true;
  if (phone_number.length() != 10)
    return false;
  for (int i = 0; i < 10; i++) {
    if (phone_number[i] < '0' || phone_number[i] > '9')
      return false;
  }
  return true;
}

void Contact::create_contact() 
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    std::cout << "first name : ";
    first_name = read_input();
    std::cout << "last name : ";
    last_name = read_input();
    std::cout << "nick name : ";
    nickname = read_input();
    std::cout << "phone number : ";
    phone_number = read_input();
    while (!check_number(phone_number))
    {
      std::cin.clear();
      std::cout << "Invalid phone number. Please enter a correct phone number : ";
      phone_number = read_input();
    }
    std::cout << "darkest secret : ";
    darkest_secret = read_input();
    this->first_name = first_name;
    this->last_name = last_name;
    this->nick_name = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
    this->date = 0;
  }
