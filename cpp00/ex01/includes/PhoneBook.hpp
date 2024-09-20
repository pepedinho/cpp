/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:22:06 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 23:39:38 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"

class PhoneBook {

  private:
    /* methodes */
    Contact     get_input(); // get user input to fill new contact
    void        increase_date(); // increase all contact.date
    int         get_older(); // return the oldest contact index
    int         get_search_index();
    std::string truncate(std::string str); // truncate information if nessesary
    void        display_info(Contact contact, int index); //display information for a index

    /* attributs */
    int         contact_cnt;

  public:
    /* methodes */
    void     add_contact(); //add new contact to PhoneBook.contact
    void     search();
    PhoneBook();

    /* attributs */
    Contact contact[8];
};

# endif
