/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:22:06 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 14:31:04 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"

class PhoneBook {

  // get user input to fill new contact
  Contact get_input() {
    Contact new_contact;
    std::cout << "first name : ";
    std::cin >> new_contact.first_name;
    std::cout << "last name : ";
    std::cin >> new_contact.last_name;
    std::cout << "nick name : ";
    std::cin >> new_contact.nick_name;
    std::cout << "phone number : ";
    std::cin >> new_contact.phone_number;
    std::cout << "darkest secret : ";
    std::cin >> new_contact.darkest_secret;
    return new_contact;
  }
  // increase all contact.date
  void increase_date() {
    for (int i = 0; i < contact_cnt; i++) {
      contact[i].date++;
    }
  }
  // return the oldest contact index
  int get_older() {
    int tmp = contact[0].date;
    int i = 0;

    while  (i < contact_cnt) {
      if (contact[i].date > tmp)
        tmp = contact[i].date;
      i++;
    }
    return tmp;
  }
  int get_search_index() {
    int index;
    std::cout << "index : ";
    std::cin >> index;
    return index;
  }
  //display information for a index
  void display_info(int index) {
    std::string f_name = contact[index].first_name.substr(0, 10);
    std::string l_name = contact[index].last_name.substr(0, 10);
    std::string nick_name = contact[index].first_name.substr(0, 10);
    std::cout << f_name;
    std::cout << " | ";
    std::cout << l_name;
    std::cout << " | ";
    std::cout << nick_name;
    std::cout << " | ";
    std::cout << index;
  }
  int contact_cnt = 0;
  public:
    Contact contact[8];
    //add new contact to PhoneBook.contact
    void add_contact() {
      Contact new_contact = get_input();
      new_contact.date = 0;
      increase_date();
      if (contact_cnt >= 8) 
        contact[get_older()] = new_contact;
      else {
        contact_cnt++;
        contact[contact_cnt] = new_contact;
      }
    }
    void search() {
      display_info(get_search_index());
    }
};

# endif
