//include headers and libraries

//implement class functions
#include "Library.h"
#include <iostream>

using namespace std; 

//constructor initializes the books array with empty strings
Library::Library() 
{
    for (int i = 0; i < 10; i++) 
    {
        books[i] = "";
    }
}

// check if the library already has 10 books
bool Library::addBook(string bookName) {
    bool hasBook = false;
    for (int i = 0; i < 10; i++) 
    {
        if (books[i] == bookName) 
        {
            hasBook = true;
        }
    }
    return hasBook;
}

bool Library::removeBook(string bookName) 
{
    for (int i = 0; i < 10; i++) 
    {
        if (books[i] == bookName) 
        {
            books[i] = "";
            return true;
        }
    }
    return false; 
}

void Library::print() 
{
    cout << "Library contents:" << endl;
}