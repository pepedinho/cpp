/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:53:57 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 16:15:59 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>
#include <exception>

class AForm;

class Bureaucrat {
  private:
    const std::string _name;
    int _grade;
  public:
    class GradeTooHighException: public std::exception {
      virtual const char * what() const throw() {
        return "Grade too high !";
      }
    };
    class GradeTooLowException: public std::exception {
      virtual const char * what() const throw() {
        return "Grade too low !";
      }
    };
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat &operator=(const Bureaucrat &other);
    ~Bureaucrat();
    std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(AForm &form);
    void executeForm(AForm const &form);
    friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& fx);
};

#endif

