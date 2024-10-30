/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:54:00 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 12:52:20 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {
  private:
    const std::string _name;
    bool              _isSigned;
    const int         _gradeToSign;
    const int         _gradeToExecute;
  public:
    class GradeTooHighException: public std::exception {
      public:
        virtual const char * what() const throw() {
          return "Grade too high !";
        }
    };
    class GradeTooLowException: public std::exception {
      public:
        virtual const char * what() const throw() {
          return "Grade too low !";
        }
    };
    Form(int gradeToSign, int gradeToExecute);
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(const Form& other);
    ~Form(); 
    Form &      operator=(const Form& other); 
    std::string getName(void) const;
    bool        getSigned(void) const;
    int         getGradeToSign(void) const;
    int         getGradeToExecute(void) const;
    void        beSigned(Bureaucrat &signatory);
    friend std::ostream &operator<<(std::ostream &os, const Form &form);
};

#endif
