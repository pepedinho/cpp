/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:35:48 by itahri            #+#    #+#             */
/*   Updated: 2024/09/28 14:59:37 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int main (void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << &str << std::endl;
  std::cout << stringPTR << std::endl;
  std::cout << &stringREF << std::endl;

  std::cout << str << std::endl;
  std::cout << *stringPTR << std::endl;
  std::cout << stringREF << std::endl;
}
