/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 13:56:24 by itahri            #+#    #+#             */
/*   Updated: 2024/10/31 14:57:35 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H

#include <sstream>
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>

class ScalarConverter {
  public:
    static void convert(std::string to_convert);
};

#endif
