#include "transaction.h"
#include "getLine.cpp"

//--------------------------  constructor  -----------------------------------
Transaction::Transaction(char type, int acc, int accA, int accB) {
	action = 'U';
	execute = false;
	accNum = -1000;
	money = -2000;
	accOne = -3000;
}

//Transaction::Transaction(char type int acc, int accA) {
//
//}

bool Transaction::setData(ifstream& inFile) {
	inFile >> action;
	if ((action == 'W') || (action == 'D')) {
		inFile >> accNum >> money;
	}
	else if (action == 'M') {
		inFile >> accNum >> money >> accOne;
	}
	else if (action == 'H') {
		inFile >> accNum;
	}
	else {
		string s;
		getLine(inFile, s, '\n');
	}
	checker();
}

void Transaction::checker() {
	if ((action == 'W') || (action == 'D') || (action == 'M') || (action == 'H')) {
		execute = true;
	}
	else {
		cout << "Unknown transaction type '" << action << "' requested";
	}
	// check account id
	if (accTwo == -3000) {
		if (action == 'W') {

		}
	}
}
