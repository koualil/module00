// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account {
	
public:

	typedef Account		t;

	static int	getNbAccounts( void );
	static int	getTotalAmount( void );
	static int	getNbDeposits( void );
	static int	getNbWithdrawals( void );
	static void	displayAccountsInfos( void );

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	static int	_nbAccounts;
	static int	_totalAmount;
	static int	_totalNbDeposits;
	static int	_totalNbWithdrawals;

	static void	_displayTimestamp( void );

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );

};



// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */





// __________________________________________________
// #include "Account.hpp"
// #include <iostream>
// #include <ctime>
// #include <iomanip>

// Account::Account(int initial_deposit)
// {
//     _displayTimestamp();
//     _amount = initial_deposit;
//     _accountIndex = _nbAccounts++;
//     _totalAmount += _amount;
//     std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

// }

// Account::~Account()
// {
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
// }

// void Account::displayAccountsInfos(void)
// {
//     _displayTimestamp();
//     std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
// }

// bool Account::makeWithdrawal(int withdrawal)
// {
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
//     if (_amount - withdrawal < 0)
//     {
//         std::cout << "refused" << std::endl;
//         return (false);
//     }
//     else
//     {
//         _nbWithdrawals++;
//         _totalNbWithdrawals++;
//         _amount -= withdrawal;
//         _totalAmount -= withdrawal;
//         std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
//     }
//     return (true);
// }

// void Account::makeDeposit(int deposit)
// {
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
//     _amount += deposit;
//     _nbDeposits++;
//     _totalAmount += deposit;
//     _totalNbDeposits++;
//     std::cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
// }


// int Account::checkAmount(void) const
// {
//     return (_amount);
// }

// void Account::displayStatus(void) const
// {
//     _displayTimestamp();
//     std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
// }

// int Account::getNbAccounts()
// {
//     return (_nbAccounts);
// }

// int Account::getNbDeposits()
// {
//     return (_totalNbDeposits);
// }

// int Account::getNbWithdrawals()
// {
//     return (_totalNbWithdrawals);
// }

// int Account::getTotalAmount()
// {
//     return (_totalAmount);
// }   

// void Account::_displayTimestamp(void)
// {
//     char timeString[20];
//     struct tm* timeInfo;
//     std::time_t currentTime;

//     std::time(&currentTime);
//     timeInfo = localtime(&currentTime);

//     std::strftime(timeString, sizeof(timeString), "[%Y%m%d_%H%M%S] ", timeInfo);

//     std::cout << timeString ;
// }

// int Account::_nbAccounts = 0;
// int Account::_totalAmount = 0;
// int Account::_totalNbDeposits = 0;
// int Account::_totalNbWithdrawals = 0;