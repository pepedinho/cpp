/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:53:57 by itahri            #+#    #+#             */
/*   Updated: 2024/10/29 17:25:02 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>

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
    Bureaucrat(int grade);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& other);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &other);
    std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);
};

#endif

