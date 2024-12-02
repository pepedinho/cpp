/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:54:00 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 16:20:36 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class AForm {
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
    class FormNotSignedException: public std::exception {
      public:
        virtual const char * what() const throw() {
          return "This form is not signed you cannot execute it !";
        }
    };

    AForm(int gradeToSign, int gradeToExecute);
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    AForm(const AForm& other);
    virtual ~AForm();

    AForm &      operator=(const AForm& other); 

    std::string getName(void) const;
    bool        getSigned(void) const;
    int         getGradeToSign(void) const;
    int         getGradeToExecute(void) const;

    void        beSigned(Bureaucrat &signatory);
    
    virtual void execute(const Bureaucrat& executor) const = 0;
};

#endif
