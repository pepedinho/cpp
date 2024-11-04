/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:27:55 by itahri            #+#    #+#             */
/*   Updated: 2024/11/04 18:18:05 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
  public:
    typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin(void) {
      return this->c.begin();
    }
    iterator end(void) {
      return this->c.end();
    }
    const_iterator cbegin(void) {
      return this->c.cbegin();
    }
    const_iterator cend(void) {
      return this->c.cend();
    }
    reverse_iterator rbegin(void) {
      return this->c.rbegin();
    }
    reverse_iterator rend(void) {
      return this->c.rend();
    }
    const_reverse_iterator rcbegin(void) {
      return this->c.rcbegin();
    }
    const_reverse_iterator rcend(void) {
      return this->c.rcend();
    }
};

#endif

