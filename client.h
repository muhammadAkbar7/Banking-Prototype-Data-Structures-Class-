#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>
#include <iomanip> // I may not need this
#include <fstream>
#include <string>
#include "account.h"
using namespace std;

const int MAXID = 9999;

//---------------------------------------------------------------------------
// Array class:  wrapper for an int array (retains all functionality) but 
//   also includes additional features:
//   -- allows input and output of the whole array
//   -- allows for comparison of 2 arrays, element by element
//   -- allows for assignment of 2 arrays
//   -- size is part of the class (so no longer needs to be passed)
//   -- includes range checking, program terminates for out-of-bound subscripts
//	
// Implementation and assumptions:
//   -- size defaults to a size of 10 if size is not specified or invalid
//   -- array elements are initialized to zero
//   -- user must enter valid integers when using >>
//   -- in <<, integers are displayed 10 per line
//---------------------------------------------------------------------------

class Client {
	friend ostream& operator<<(ostream&, const Client&);

public:
	//accounts types[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // set up the array
	Client(string = "dummyLast" , string = "dummyFirst", int = 0, Account = Account()); //account array or int[10] array?
	~Client();
	bool setData(ifstream&);
	bool operator==(const Client&) const;
	bool operator<(const Client&) const;
	bool operator>(const Client&) const;

private:
	string lastName;
	string firstName;
	int idNumber;
	Account types[]; // how to address accounts?
	//Client(string = "dummyLast", string = "dummyFirst", int = 0, types[] Account.Account());
	//account types[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // set up the array

};

#endif
