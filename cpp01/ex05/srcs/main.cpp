/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:18:42 by itahri            #+#    #+#             */
/*   Updated: 2024/10/01 09:37:41 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(void)
{
  Harl harl;

  harl.complain("DEBUG");
  harl.complain("WARNING");
  harl.complain("INFO");
  harl.complain("ERROR");
  harl.complain("INFO");
  harl.complain("GDSGJFF");
}
