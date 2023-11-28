//include headers and libraries
#include "Library.h"
#include <iostream>

int main(){
    Library library;
    
    //ask for commands and execute
    while (true) {
        string command;
        cout << "Enter command: "; 
        cin >> command; 

        if (command == "a")
        {
            string bookName; 
            library.addBook(bookName); 
            if (!library.addBook(bookName))
            {

            }
        }
        else if (command == "r")
        {
            string bookName;
            library.removeBook(bookName); 
            if (!library.removeBook(bookName))
            {
                
            }
        }
        else if (command == "p")
        {
            library.print();
        }
        else{
            break; 
        }
    }

    return 0; 
}
