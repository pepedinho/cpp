/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:01:34 by itahri            #+#    #+#             */
/*   Updated: 2025/04/22 17:03:07 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Jhonson.hpp"

int main (int argc, char *argv[]) { 
  if (argc < 2) {
    std::cout << "Not enought arguments !" << std::endl;
    return 1;
  }
  
  try {
    Jhonson t = Jhonson(argc, argv);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
