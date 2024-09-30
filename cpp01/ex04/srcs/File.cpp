/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 00:14:59 by itahri            #+#    #+#             */
/*   Updated: 2024/10/01 01:09:34 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/File.hpp"

File::File(std::string filename, std::string toFind, std::string toReplace) : filename(filename), toFind(toFind), toReplace(toReplace) {};

File::~File(void) {};

std::string File::getFilename(void) {
  return this->filename;
}

void File::read(void)
{
  std::ifstream inputFile(this->getFilename().c_str());
  std::ofstream outputFile(this->getFilename().append(".replace").c_str());
  std::string line;
  std::size_t found;
  std::size_t start;
  std::string newLine;

  found = 0;

  if (!inputFile.is_open())
    std::cerr << "Error in file opening" << std::endl;
  if (!outputFile.is_open())
    std::cerr << "Error in creating file" << std::endl;


  while (getline(inputFile, line)) 
  {
    newLine.clear();
    start = 0;
    while ((found = line.find(this->toFind, start)) != std::string::npos)
    {
      newLine += line.substr(start, found - start);
      newLine += this->toReplace;
      start = found + this->toFind.length();
    }
    newLine += line.substr(start);
    outputFile << newLine << std::endl;
  }
  inputFile.close();
  outputFile.close();
}

