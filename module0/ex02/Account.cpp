/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:00:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/02/01 10:48:38 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "Account.hpp"
	#include <iostream>
	#include <iomanip>

	int	Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

	Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit), _nbWithdrawals(0), _nbDeposits(0)
	{
		_nbAccounts++;
		_totalAmount += initial_deposit;
		_displayTimestamp();
		std::cout << "index:"<< _accountIndex << ";";
		std::cout << "amount:"<< _amount <<";";
		std::cout << "created" << std::endl;
		return ;
	}

	Account::~Account()
	{
		_displayTimestamp();
		std::cout << "index:"<< _accountIndex << ";";
		std::cout << "amount:"<< _amount <<";";
		std::cout << "closed" << std::endl;
		return ;
	}

	void	Account::_displayTimestamp( void )
	{
		std::time_t result;
		struct tm *tm;

		result = std::time(0);
		tm = localtime(&result);
		std::cout << std::put_time(tm,"[%Y%m%d_%H%M%S]") << " ";
	}

	int	Account::getNbAccounts( void )
	{
		return (_nbAccounts);
	}

	int	Account::getTotalAmount( void )
	{
		return (_totalAmount);
	}

	int	Account::getNbDeposits( void )
	{
		return (_totalNbDeposits);
	}

	int	Account::getNbWithdrawals( void )
	{
		return (_totalNbWithdrawals);
	}

	int		Account::checkAmount( void ) const
	{
		return (_amount);
	}

	void	Account::makeDeposit( int deposit )
	{
		_displayTimestamp();
		std::cout << "index:"<< _accountIndex << ";";
		std::cout << "p_amount:"<< _amount <<";";
		std::cout << "deposit:"<< deposit << ";";
		_amount += deposit;
		_totalAmount += deposit;
		std::cout << "amount:"<< _amount <<";";
		_nbDeposits++;
		_totalNbDeposits++;
		std::cout << "nb_deposits:"<< _nbDeposits << std::endl;
	}

	bool	Account::makeWithdrawal( int withdrawal )
	{
		_displayTimestamp();
		std::cout << "index:"<< _accountIndex << ";";
		std::cout << "p_amount:"<< _amount <<";";
		if (_amount - withdrawal < 0)
		{
			std::cout << "withdrawal:refused" << std::endl;
			return (0);
		}
		std::cout << "withdrawal:"<< withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "amount:"<< _amount <<";";
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:"<< _nbWithdrawals << std::endl;
		return (1);
	}

	void	Account::displayAccountsInfos( void )
	{
		_displayTimestamp();
		std::cout << "accounts:"<< _nbAccounts << ";";
		std::cout << "total:"<< _totalAmount <<";";
		std::cout << "deposits:"<< _totalNbDeposits << ";";
		std::cout << "withdrawals:"<< _totalNbWithdrawals << std::endl;
		return ;
	}

	void	Account::displayStatus( void ) const
	{
		_displayTimestamp();
		std::cout << "index:"<< _accountIndex << ";";
		std::cout << "amount:"<< _amount <<";";
		std::cout << "deposits:"<< _nbDeposits<< ";";
		std::cout << "withdrawals:"<< _nbWithdrawals << std::endl;
		return ;
	}

