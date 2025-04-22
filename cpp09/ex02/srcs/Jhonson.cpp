/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Jhonson.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:03:34 by itahri            #+#    #+#             */
/*   Updated: 2025/04/22 17:03:55 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Jhonson.hpp"

Jhonson::Jhonson(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    _arg.push_back(atoi(argv[i]));
  }

  for (size_t i = 0; i < _arg.size(); i++) {
    std::cout << _arg[i];
  }
  std::cout << std::endl;
}

