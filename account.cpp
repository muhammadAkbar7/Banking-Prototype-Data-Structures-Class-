#include "account.h"
#include "client.h"

//----------------------------------------------------------------------------
// Constructor
// Default constructor for Account class
Account::Account() { 
	int types[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 
	balance = 0;
	finalBalance = 0;
}

//----------------------------------------------------------------------------
// Destructor
// Destructor for Account class
Account::~Account() { 
}

//----------------------------------------------------------------------------
// setDataAcc
// takes in a file called "inFile" and returns true if the account's balance
// can be set
bool Account::setDataAcc(ifstream& inFile) {
	inFile >> balance;
	balance = finalBalance;
	return true;
}

//----------------------------------------------------------------------------
// deposit
// takes money and deposit it into the account balance
void Account::deposit(int money) {
	finalBalance += money;
}

//----------------------------------------------------------------------------
// withdraw
// takes money and withdraws it from the account balance 
void Account::withdraw(int money) {
	finalBalance -= money;
	if (finalBalance < 0) { // supposed to withdraw money from other account
		
	}
}
