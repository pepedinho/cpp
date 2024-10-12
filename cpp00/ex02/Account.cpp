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
#include <sstream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
  _amount = initial_deposit;
  _totalAmount += _amount;
  _nbAccounts += 1;
  _displayTimestamp();
  std::cout <<  "index" << _nbAccounts - 1 << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void) {
  _displayTimestamp();
  std::cout <<  "index" << _nbAccounts - 1 << ";amount:" << _amount << ";closed" << std::endl;
}

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

int Account::checkAmount( void ) const {
  return _amount;
}


void    Account::_displayTimestamp( void ) {
    std::time_t now = std::time(0);

    std::tm* tm_time = std::localtime(&now);
    std::stringstream ss;
    ss << std::setw(4) << (1900 + tm_time->tm_year)
       << std::setw(2) << std::setfill('0') << (tm_time->tm_mon + 1)
       << std::setw(2) << std::setfill('0') << tm_time->tm_mday
       << "_"
       << std::setw(2) << std::setfill('0') << tm_time->tm_hour
       << std::setw(2) << std::setfill('0') << tm_time->tm_min
       << std::setw(2) << std::setfill('0') << tm_time->tm_sec;

    std::cout << "[" << ss.str() << "] ";
}

void	Account::displayAccountsInfos( void ) {
  _displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:" << getNbAccounts() << ";amount:" << _amount << ";deMposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit( int deposit ) {
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount - deposit
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;	
}
	
bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount - withdrawal < 0) {
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;	
	return true;
}
