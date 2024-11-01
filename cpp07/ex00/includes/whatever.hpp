/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:07:09 by itahri            #+#    #+#             */
/*   Updated: 2024/11/01 15:15:21 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
  T buf = a;

  a = b;
  b = buf;
}

template <typename T>
T min(T a, T b) {
  return a < b ? a : b;
}

template <typename T>
T max(T a, T b) {
  return a > b ? a : b;
}

#endif
