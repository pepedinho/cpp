/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:41:58 by itahri            #+#    #+#             */
/*   Updated: 2024/10/30 16:24:41 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <fstream>
#include <ostream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {
  _target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
  _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src) {
  _target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
  if (this != &src)
    _target = src._target;
  AForm::operator=(src);
  return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
  if (AForm::getSigned() == false)
    throw AForm::FormNotSignedException();
  if (executor.getGrade() > AForm::getGradeToExecute())
    throw AForm::GradeTooLowException();

  std::ofstream file;
  file.open((_target + "_shrubbery").c_str());
  file << "                                  # #### ####" << std::endl;
  file << "                                ### \\/#|### |/####" << std::endl;
  file << "                               ##\\/#/ \\\\||/##/_/##/_#" << std::endl;
  file << "                             ###  \\/###|/ \\/ # ###" << std::endl;
  file << "                           ##_\\_#\\_\\## | #/###_/_####" << std::endl;
  file << "                          ## #### # \\ #| /  #### ##/##" << std::endl;
  file << "                           __#_--###`  |{,###---###-~" << std::endl;
  file << "                                     \\ }{" << std::endl;
  file << "                                      }}{" << std::endl;
  file << "                                      }}{" << std::endl;
  file << "                                      {{}}" << std::endl;
  file << "                                , -=-~{ .-^- _" << std::endl;
  file << "                                      `}" << std::endl;
  file << "                                       {" << std::endl;
  file.close();
}


