/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:29:18 by itahri            #+#    #+#             */
/*   Updated: 2024/09/19 14:09:46 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>


char ft_toupper(char c) {
  if (c >= 'a' && c <= 'z')
    return c - 32;
  return c;
}

int main (int argc, char *argv[]) {
  if (argc <= 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  for (int i = 1; i < argc; i++) {
    for (int j = 0; j < strlen(argv[i]); j++) {
      std::cout << (char)toupper(argv[i][j]);
    }
  }
  std::cout << "\n";
  return 0;
}

