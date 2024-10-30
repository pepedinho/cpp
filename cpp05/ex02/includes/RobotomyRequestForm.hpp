/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:26:46 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 16:29:06 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
      std::string _target;
    public:
        class RobotomizeFailureException: public std::exception {
          public:
            virtual const char * what() const throw() {
              return "Failed to robotized :/";
            }
        };
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const & src);
        ~RobotomyRequestForm();
        RobotomyRequestForm & operator=(RobotomyRequestForm const & src);

        void execute(const Bureaucrat & executor) const;
};

#endif 
