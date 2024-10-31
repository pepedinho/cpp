/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:58:05 by itahri            #+#    #+#             */
/*   Updated: 2024/10/31 18:10:37 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "I need 1 argument to convert !! " << std::endl;
		return 1;
	}
	if (argc > 2 ) {
		std::cout << "I need only 1 argument to convert !! " << std::endl;
		return 1;
	}
	ScalarConverter::convert(argv[1]);
	return 0;
}
