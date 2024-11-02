/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 23:48:36 by itahri            #+#    #+#             */
/*   Updated: 2024/11/02 00:17:49 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

template <typename T>
Array<T>::Array(void) : _elements(NULL), _lenght(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]), _lenght(n) {}

template <typename T>
Array<T>::Array(const Array& src) : _elements(NULL) {
  *this = src;
}

template <typename T>
Array<T>::~Array<T>(void) {
  if (_elements)
    delete [] _elements;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& src) {
  if (this != &src) {
    if (_elements)
      delete [] _elements;
    _lenght = src._lenght;
    _elements = new T[_lenght];

    for (unsigned int i = 0; i < _lenght; i++)
      _elements[i] = src._elements[i];
  }
  return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int n) {
  if (n >= _lenght)
    throw std::out_of_range("Index out of bounds :/");
  return _elements[n];
}

template <typename T>
unsigned int Array<T>::size(void) const {
  return _lenght;
}
