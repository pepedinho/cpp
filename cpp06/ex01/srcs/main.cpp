/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:06:11 by itahri            #+#    #+#             */
/*   Updated: 2024/11/01 14:16:13 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include "../includes/Data.hpp"

int main(void) {
  Data data("oui", 42);

  std::cout << "before : " << std::endl;
  std::cout << "\tPTR: " << &data << std::endl;
  std::cout << "\tNAME: " << data.name << std::endl;
  std::cout << "\tCONTENT: " << data.content << std::endl;

  uintptr_t raw = Serializer::serialize(&data);
  std::cout << "after : " << std::endl;
  std::cout << "\tSERIALIZED PTR: " << raw << std::endl;

  Data* deserializedData = Serializer::deserialize(raw);
    std::cout << "\nDeserialized Data object:" << std::endl;
    std::cout << "\tPTR: " << deserializedData << std::endl;
    std::cout << "\tNAME: " << deserializedData->name << std::endl;
    std::cout << "\tCONTENT: " << deserializedData->content << std::endl;

    if (deserializedData == &data) {
        std::cout << "\nTest passed: deserialized pointer matches the original pointer." << std::endl;
    } else {
        std::cout << "\nTest failed: deserialized pointer does not match the original pointer." << std::endl;
    }
}
