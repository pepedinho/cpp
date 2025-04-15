/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:37:34 by itahri            #+#    #+#             */
/*   Updated: 2024/11/11 17:40:14 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include <cstdlib>
#include "../includes/Container.hpp"

int main (int argc, char *argv[]) {
  if (argc != 2) {
     std::cout << "error" << std::endl; 
     return 1;
  }
  
  try {
    Container container = Container(argv[1]);
    container.compute();
  } catch (std::exception& e) {
      std::cout << e.what() << std::endl;
  }


  return 0;
}
