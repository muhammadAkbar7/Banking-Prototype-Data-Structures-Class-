#ifndef BSTREE_H
#define BSTREE_H

#include "client.h"
#include <iostream>
#include <fstream>
//#include "nodedata.h" // not sure 
using namespace std;

class BSTree {
public:
    BSTree();
    ~BSTree(); // calls makeEmpty which deallocates all memory
    // insert object into the tree, parameter holds pointer to object to insert
    bool insert(Client*);

    // retrieve object, first parameter is object to retrieve
    // second parameter holds pointer to found object, nullptr if not found
    bool retrieve(const Client& target, Client*& point)const;
    //bool retrieveHelp(const Client& target, Client*& point, Node* temp);
    void display()const; //displays the contents of a tree to cout
    /*void displayHelp(Node* printer);*/
    void makeEmpty(); //empties the current tree, deallocates all memory
    /*void makeEmpty(Node * & ptr);*/
    bool isEmpty()const; //returns true if tree is empty
private:
    struct Node { //glue that holds data properly
        Client* data;
        Node* right;
        Node* left;
    };
    Node* root; // root of the tree
    //bool retrieve(const Client& target, Client*& point)const;
    bool retrieveHelp(const Client& target, Client*& point, Node* temp) const;
    void displayHelp(Node* printer) const;
    void makeEmpty(Node*& ptr);
};

#endif
