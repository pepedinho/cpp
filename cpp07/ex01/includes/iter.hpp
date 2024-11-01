/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:18:02 by itahri            #+#    #+#             */
/*   Updated: 2024/11/01 15:27:21 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#include <iostream>

template <typename T>
void iter(T* array, std::size_t len, void (*f)(T&)) {
  for (std::size_t i = 0; i < len; i++) {
    f(array[i]);
  }
}

#endif 
