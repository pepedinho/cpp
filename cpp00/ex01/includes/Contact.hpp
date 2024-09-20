/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:22:03 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 23:06:57 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <algorithm>
#include <cctype>

class Contact {
  private:
    int date;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
  public:
    Contact();
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nick_name();
    std::string get_phone_number();
    std::string get_secret();
    int         get_date();
    void        inc_date();
    void        create_contact();
};

# endif
