/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:40:34 by itahri            #+#    #+#             */
/*   Updated: 2024/11/02 00:12:24 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array {
  private:
    T* _elements;
    unsigned int _lenght;
  public:
    Array(void);
    Array(unsigned int n);
    Array(const Array& src);
    ~Array(void);
    Array& operator=(const Array& src);
    T& operator[](unsigned int n);
    unsigned int size(void) const;
    
};

#include "Array.tpp"

#endif // !ARRAY_HPP
