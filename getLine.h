#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <fstream>
#include "getLine.cpp"
using namespace std;

//---------------------------  class NodeData  ------------------------------
class Transaction {                                 // incomplete class
    friend ostream& operator<<(ostream&, const Transaction&);

public:
    Transaction(char action, int accNum, int accOne, int accTwo);
    bool setData(ifstream&);
    void checker();
    //Transaction(char action, int accNum, int accOne);
    //NodeData(int n = 0, char c = 'z');       // default constructor
    //bool setData();                          // sets data by prompting user
    //bool setData(ifstream&);                 // reads data from file



};
