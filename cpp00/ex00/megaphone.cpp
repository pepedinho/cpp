/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:29:18 by itahri            #+#    #+#             */
/*   Updated: 2024/10/12 18:13:38 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main (int argc, char *argv[]) {
  if (argc <= 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  for (int i = 1; argv[i]; i++) {
    for (int j = 0; argv[i][j] ; j++) {
      std::cout << (char)std::toupper(argv[i][j]);
    }
  }
  std::cout << std::endl;
  return 0;
}
