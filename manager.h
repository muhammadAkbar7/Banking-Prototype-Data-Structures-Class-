// file array.h
// Simple class Array (for integers)
// Example from Deitel and Deitel: C++ How To Program

#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <fstream>
#include "BSTree.h"
#include "client.h"
using namespace std;

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

class Manager {

public:
	Manager();
	~Manager();

	void build(ifstream&);
private:
	BSTree tree;

};

#endif
