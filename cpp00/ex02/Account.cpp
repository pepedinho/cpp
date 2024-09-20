/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itahri <itahri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:27:09 by itahri            #+#    #+#             */
/*   Updated: 2024/09/20 18:42:03 by itahri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
  return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
  return _totalAmount;
}

int	Account::getNbDeposits( void ) {
  return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
  return _totalNbWithdrawals;
}

void Account::_displayTimestamp( void )
{
  time_t timestamp = time(NULL);
  struct tm* localTime = localtime(&timestamp);
  std::cout << "[" << std::setw(4) << std::setfill('0') << (localTime->tm_year + 1900);
}
