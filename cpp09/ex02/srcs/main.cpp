/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:01:34 by itahri            #+#    #+#             */
/*   Updated: 2025/05/16 19:07:40 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main (int argc, char *argv[]) { 
  if (argc < 2) {
    std::cout << "Not enought arguments !" << std::endl;
    return 1;
  }
  
  try {
    JhonsonVec t = JhonsonVec(argc, argv);
    JhonsonQueue te = JhonsonQueue(argc, argv);
  } catch (std::exception& e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
