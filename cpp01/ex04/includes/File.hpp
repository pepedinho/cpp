/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:11:12 by itahri            #+#    #+#             */
/*   Updated: 2024/10/01 01:00:54 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class File {
  private:
    std::string line;
    std::string filename;
    std::string toFind;
    std::string toReplace;
  public:
    File (std::string filename, std::string toFind, std::string toReplace);
    std::string getFilename(void);
    void read(void);
    ~File(void);
};

#endif
