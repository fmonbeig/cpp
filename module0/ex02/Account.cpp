/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmonbeig <fmonbeig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:00:17 by fmonbeig          #+#    #+#             */
/*   Updated: 2022/01/31 18:37:19 by fmonbeig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "Account.hpp"
	#include <iostream>
	#include <iomanip>

	void	_displayTimestamp( void )
	{
		std::time_t result;
		struct tm *tm;

		result = std::time(0);
		tm = localtime(&result);
		std::cout << std::put_time(tm,"[%Y%m%d_%H%M%S]");
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
		std::cout << "deposits:"<< _nbDeposits << std::endl;
	}

	// int		Account::checkAmount( void ) const
	// {

	// }

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
		std::cout << "deposits:"<< _nbDeposits << std::endl;
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


	Account::Account(int initial_deposit): _accountIndex(_nbAccounts), _amount(initial_deposit)
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




// 	void	makeDeposit( int deposit );
// 	bool	makeWithdrawal( int withdrawal );
// 	int		checkAmount( void ) const;
// 	void	displayStatus( void ) const;


// private:

// 	static int	_nbAccounts;
// 	static int	_totalAmount;
// 	static int	_totalNbDeposits;
// 	static int	_totalNbWithdrawals;

// 	static void	_displayTimestamp( void );

// 	int				_accountIndex;
// 	int				_amount;
// 	int				_nbDeposits;
// 	int				_nbWithdrawals;

// 	Account( void );

// };
