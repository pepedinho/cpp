/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 22:19:06 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 22:36:03 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include <string>
#include "AForm.hpp"

class Intern {
  public:
    class InexistantFormException: public std::exception {
      public:
        virtual const char * what() const throw() {
          return "this form does not exist :/";
        }
    };
    Intern();
    Intern(const Intern& src);
    ~Intern();
    Intern& operator=(const Intern& src);

    AForm* makeForm(std::string name, std::string target);
};

#endif
