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
#include <map>
#include <cstdlib>
#include <vector>

# define EXCHANGE_RATE_DB "data.csv"

class Container {
  private: 
    std::map<std::string, float> _map_data;
    std::map<std::string, float> _map_input;
    std::vector<std::string> _error_stack;
    std::ifstream _input;
    std::ifstream _exchange;
    
  public: 
    Container(std::string filename);
    Container(const Container& src);
    ~Container();
    void compute();
    std::map<std::string, float>::const_iterator  find_closest(const std::string& ref);
};

#endif 

