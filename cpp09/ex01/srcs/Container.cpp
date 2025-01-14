/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Container.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:35:28 by itahri            #+#    #+#             */
/*   Updated: 2024/11/11 17:42:12 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Container.hpp"


int mult(int a, int b) {
  // std::cout << "mulitplied " << a << " by " << b << " to get : " << a * b << std::endl;
  return a * b;
}

int add(int a, int b) {
  // std::cout << "additioned " << a << " by " << b << " to get : " << a + b << std::endl;
  return a + b;
}
int minus(int a, int b) {
  // std::cout << "minus " << a << " by " << b << " to get : " << a - b << std::endl;
  return a - b;
}

int divide(int a, int b) {
  // std::cout << "divide " << a << " by " << b << " to get : " << a / b << std::endl;
  return a / b;
}

bool is_operator(char s) {
  if (s == '*' || s == '+' || s == '/' || s == '-')
    return true;
  return false;
}

bool check_validity(std::string& str) {
  for (unsigned int i = 0; str[i]; i++) {
    if ((str[i] < '0' || str[i] > '9') && !is_operator(str[i]) && !isspace(str[i])) {
      return false;
    }
    else if (!isspace(str[i])) {
      if (i < str.length() - 1) {
        if (str[i + 1] != ' ') {
          return false;
        }
      }
    }
  }
  return true;
}

Container::Container(std::string str) {
  std::stack<std::string> tmp;
  
  if (str.empty())
    throw (std::invalid_argument("Argument is empty"));
  else if (!check_validity(str))
    throw (std::invalid_argument("Invalid caracteres"));
  for (int i = 0; str[i]; i++) {
    if (!isspace(str[i]) && !is_operator(str[i])) {
      _stk.push(std::atoi(str.substr(i, 1).c_str()));
    } else if ((!isspace(str[i]) && is_operator(str[i]))){
      int tmp1 = _stk.top();
      _stk.pop();
      int tmp2 = _stk.top();
      _stk.pop();
      if (str[i] == '*')
        _stk.push(mult(tmp2, tmp1));
      else if (str[i] == '+')
        _stk.push(add(tmp2, tmp1));
      else if (str[i] == '-')
          _stk.push(minus(tmp2, tmp1));
      else 
          _stk.push(divide(tmp2, tmp1));
    }
  }
  std::cout << "result : " << _stk.top() << std::endl;
}

Container::~Container() {};
