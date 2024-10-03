/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:16:14 by itahri            #+#    #+#             */
/*   Updated: 2024/10/01 11:58:33 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>

class Fixed {
  private:
    int value;
    static const int b = 8;
  public:
    Fixed (void); // default constructor
    Fixed (const Fixed& src); // copy constructor
    Fixed(const int n);
    Fixed(const float f);
    ~Fixed (void); // destructor
    Fixed& operator=(const Fixed& other); // affectation operator
    int toInt(void) const;
    float toFloat(void) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif
