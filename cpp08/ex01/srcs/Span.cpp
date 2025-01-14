/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:17:03 by itahri            #+#    #+#             */
/*   Updated: 2024/11/04 16:33:49 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span(int n) : _max(n), _size(0), _tab(std::vector<int>()) {}

Span::Span(const Span& src) {
  *this = src;
}

Span&  Span::operator=(const Span& src) {
  if (this != &src) {
    _max = src._max;
    _size = src._size;
    _tab = std::vector<int>(src._tab);
  }
  return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
  if (_size + 1 > _max)
    throw std::invalid_argument("Not enought space in Span");
  _tab.push_back(n);
  _size++;
}

int Span::shortestSpan(void) {
  if (_size <= 1)
    throw std::invalid_argument("Not enought number in Span");
  unsigned int tmp = _tab[1] - _tab[0];
  std::sort(_tab.begin(), _tab.end());
  for (size_t i = 1; i < _tab.size(); ++i) {
        unsigned int distance = std::max(_tab[i], _tab[i - 1]) - std::min(_tab[i], _tab[i - 1]);
        if (distance < tmp) {
            tmp = distance;
      }
  }
  return tmp;
}

int Span::longestSpan(void) {
  if (_size < 1)
    throw std::invalid_argument("Not enought number in Span");
  return *std::max_element(_tab.begin(), _tab.end()) - *std::min_element(_tab.begin(), _tab.end());
}

int abs(int n) {
  return n < 0 ? -n : n;
}
