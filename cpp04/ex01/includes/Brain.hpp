/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 20:05:07 by itahri            #+#    #+#             */
/*   Updated: 2024/10/07 20:55:32 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>

class Brain {
  private:
    std::string ideas[100];
  public:
    Brain(void);
    Brain(Brain& other);
    Brain& operator=(Brain& other);
    ~Brain(void);
    std::string getIdeas(int i);
    void inception(std::string idea, int i);
};

#endif // !BRAIN_HPP
