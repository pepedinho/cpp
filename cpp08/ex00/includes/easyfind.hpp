/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:42:59 by itahri            #+#    #+#             */
/*   Updated: 2024/11/04 14:05:22 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template <typename T>
int easyfind(const T& tab, int to_find) {
  typename T::const_iterator it;

  it = std::find(tab.begin(), tab.end(), to_find);
  if (it == tab.end())
    throw std::invalid_argument("Impossible to find :/");
  return *it;
}

#endif 
