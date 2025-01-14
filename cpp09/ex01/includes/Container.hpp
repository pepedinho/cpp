/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Container.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:32:34 by itahri            #+#    #+#             */
/*   Updated: 2024/11/11 17:35:14 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <iostream>
#include <fstream>
#include <stack>
#include <cstdlib>

class Container {
  private: 
    std::stack<int> _stk;
  public: 
    Container(std::string str);
    Container(const Container& src);
    ~Container();
};

#endif 

