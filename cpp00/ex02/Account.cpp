/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:33:17 by yloutfi           #+#    #+#             */
/*   Updated: 2023/08/28 08:47:57 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account ( int initial_deposit ) : _amount(initial_deposit), \
	_accountIndex(Account::_nbAccounts), _nbDeposits(0), _nbWithdrawals(0) 
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";" << "amount:" \
		<< _amount << ";created" << std::endl;
	Account::_nbAccounts += 1;
	Account::_totalAmount += _amount;
}

Account::~Account ( void )
{
	_displayTimestamp();
	std::cout << " " << "index:" << _accountIndex << ";" << "amount:" \
		<< _amount << ";closed" << std::endl;
	_nbAccounts -= 1;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
}

void Account::_displayTimestamp( void )
{
	time_t now = time(0);
   	tm *ltm = localtime(&now);
	std::cout << "[";
	std::cout << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday;
	std::cout << "_";
	std::cout << ltm->tm_hour;
	std::cout << ltm->tm_min;
	std::cout << ltm->tm_sec;
	std::cout << "]";
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";" \
		<< "total:" << Account::_totalAmount << ";" \
		<< "deposits:" << Account::_totalNbDeposits << ";" \
		<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_nbDeposits += 1;
	_displayTimestamp();
	_amount += deposit;
	std::cout << " index:" << _accountIndex << ";" \
		<< "p_amount:" << _amount - deposit << ";" \
		<< "deposits:" << deposit << ";" \
		<< "amount:" << _amount << ";" \
		<< "nb_deposits:" << _nbDeposits << std::endl;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" \
		<< "p_amount:" << _amount << ";" ;
	_amount -= withdrawal;
	if (Account::checkAmount() == 0)
	{
		_nbWithdrawals += 1;
		std::cout << "withdrawal:" << withdrawal << ";" \
			<< "amount:" << _amount << ";" \
			<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;	
		return (true);
	}
	else
	{
		std::cout << "withdrawal:" << "refused" << std::endl;
		_amount += withdrawal;
		return (false);
	}
}

int		Account::checkAmount( void ) const
{
	if (_amount >= 0)
		return 0;
	else
		return 1;
}

void Account::displayStatus( void ) const 
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";" \
		<< "amount:" << _amount << ";" \
		<< "deposits:" << _nbDeposits << ";" \
		<< "withdrawals:" << _nbWithdrawals << std::endl;
}
