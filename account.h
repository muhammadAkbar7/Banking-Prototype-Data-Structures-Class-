
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <fstream>
using namespace std;

//---------------------------  class NodeData  ------------------------------
class Account {                                 // incomplete class
    friend ostream& operator<<(ostream&, const Account&);

public:
    Account();
    ~Account();
    bool setDataAcc(ifstream&);                 // reads data from file
    void deposit(int);
    void withdraw(int);


private:
    int balance;
    int finalBalance;
};

#endif