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

int Contact::get_date() {
  return this->get_date();
}

void Contact::inc_date() {
  this->date++;
}

void Contact::create_contact() {
    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    std::cout << "first name : ";
    std::cin >> first_name;
    std::cout << "last name : ";
    std::cin >> last_name;
    std::cout << "nick name : ";
    std::cin >> nickname;
    std::cout << "phone number : ";
    std::cin >> phone_number;
    std::cout << "darkest secret : ";
    std::cin >> darkest_secret;
    this->first_name = first_name;
    this->last_name = last_name;
    this->nick_name = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
    this->date = 0;
  }
