/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   JhonsonVec.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:02:04 by itahri            #+#    #+#             */
/*   Updated: 2025/05/16 19:06:39 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef JHONSON_VEC_CPP
#define JHONSON_VEC_CPP

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <deque>

class JhonsonVec {
  private: 
    std::vector<int> _arg;
    std::vector<int> _big;
    std::vector<int> _small;

  public:
    JhonsonVec(int argc, char *argv[]);
    std::vector<int> make_pairs(std::vector<int> tab);
};

class JhonsonQueue {
  private:
    std::deque<int> _arg;
    std::deque<int> _big;
    std::deque<int> _small;

  public:
    JhonsonQueue(int argc, char *argv[]);
    std::deque<int> make_pairs(std::deque<int> tab);
};



#endif
