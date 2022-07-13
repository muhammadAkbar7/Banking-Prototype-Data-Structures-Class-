#include "client.h"
#include "account.h"

//--------------------------  constructor  -----------------------------------
Client::Client(string last, string first, int id, Account typesOf) {
    idNumber = (id >= 1000 && id <= MAXID ? id : -1);
    //types[] = typesOf; //expected an expression, no need
    lastName = last;
    firstName = first;
}

//--------------------------  destructor  ------------------------------------
// Needed so that memory for strings is properly deallocated
Client::~Client() { }

bool Client::setData(ifstream& inFile) {
    inFile >> lastName >> firstName >> idNumber;
    for (int i = 0; i < 10; i++) {
        types[i].setDataAcc(inFile); //meaning
    }
    return idNumber >= 0 && idNumber <= MAXID;
}

bool Client::operator==(const Client& obj) const {
    return idNumber == obj.idNumber;
}

bool Client::operator<(const Client& obj) const {
    return idNumber < obj.idNumber;
}

bool Client::operator>(const Client& obj) const {
    return idNumber > obj.idNumber;
}

