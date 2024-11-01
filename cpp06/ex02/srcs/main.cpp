/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:48:31 by itahri            #+#    #+#             */
/*   Updated: 2024/11/01 14:55:44 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "../includes/Base.hpp"

int main() {
    for (int i = 0; i < 5; ++i) {
        Base* base = generate();

        std::cout << "Identifying using pointer:              ";
        identify(base);

        std::cout << "Identifying using reference:            ";
        identify(*base);

        delete base;
        std::cout << std::endl;
    }

    return 0;
}
