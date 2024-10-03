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
    /*       CONSTRUCTOR/DESTRUCTOR        */
    Fixed   (void); // default constructor
    Fixed   (const Fixed& src); // copy constructor
    Fixed   (const int n);
    Fixed   (const float f);
    ~Fixed  (void); // destructor
    /*          OPERATOR OVERLOAD          */
    Fixed&  operator=   (const Fixed& other); // affectation operator
    bool    operator>   (const Fixed& other) const;
    bool    operator>=  (const Fixed& other) const;
    bool    operator<   (const Fixed& other) const;
    bool    operator<=  (const Fixed& other) const;
    bool    operator==  (const Fixed& other) const;
    bool    operator!=  (const Fixed& other) const;
    Fixed     operator+   (const Fixed& other);
    Fixed     operator-   (const Fixed& other);
    Fixed     operator/   (const Fixed& other);
    Fixed     operator*   (const Fixed& other);
    Fixed&  operator++  (); //pre
    Fixed   operator++  (int); //post
    Fixed&  operator--  ();
    Fixed   operator--  (int);
    /*              METHODES              */
    int     toInt(void) const;
    float   toFloat(void) const;
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    static Fixed min(Fixed& a, Fixed& b);
    static const Fixed min(const Fixed& a, const Fixed& b);
    static Fixed max(Fixed& a, Fixed& b);
    static const Fixed max(const Fixed& a, const Fixed& b);

};

#endif
