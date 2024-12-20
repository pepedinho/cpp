/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:18:42 by itahri            #+#    #+#             */
/*   Updated: 2024/10/01 09:14:44 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/File.hpp"

int	main(int argc, char *argv[])
{
  if (argc > 4) {
    std::cerr << "To much args : <filename> <s1> <s2> " << std::endl;
    return 1;
  } else if (argc < 4) {
    std::cerr << "Not enough args : <filename> <s1> <s2> " << std::endl;
    return 1;
  }
  File *file = new File(argv[1], argv[2], argv[3]);
  file->replace();
	return 0;
}
