#include "manager.h"
//#include "client.h"
//#include "BSTree.h"

Manager::Manager() {
	BSTree();
}

//----------------------------------------------------------------------------
Manager::~Manager() {
	//~BSTree();

}

void Manager::build() {
    buildHelp(infile);
}

//--------------------------  constructor  -----------------------------------
void Manager::buildHelp(ifstream& infile) {
    Client* ptr;
    bool successfulRead;                            // read good data
    bool success;                                   // successfully insert
    for (;;) {
        ptr = new Client;
        successfulRead = ptr->setData(infile);       // fill the T object
        if (infile.eof()) {
            delete ptr;
            ptr = NULL;
            break;
        }

        // insert good data into the list, otherwise ignore it
        if (successfulRead) {
            success = tree.insert(ptr);
        }
        else {
            delete ptr;
            ptr = NULL;
        }
        if (!success) break;
    }
	//accNum = num;
}