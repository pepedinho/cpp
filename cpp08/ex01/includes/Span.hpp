/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:59:54 by itahri            #+#    #+#             */
/*   Updated: 2024/11/04 16:31:57 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include <typeinfo>
#include <algorithm>
#include <string>

class Span {
  private:
    unsigned int _max;
    unsigned int _size;
    std::vector<int> _tab;
  public:
    Span(int n);
    Span(const Span& src);
    ~Span(void);
    Span& operator=(const Span& src);
    void addNumber(int n);
    int shortestSpan(void);
    int longestSpan(void);
    template<typename T>
		void addRange(typename T::iterator begin, typename T::iterator end) {
			int a;
			if (typeid(*begin) != typeid(a)) {
				throw std::exception();
			}
			while (begin != end) {
				addNumber(*begin);
				++begin;
			}
		}
};

#endif 
