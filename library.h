#ifndef LIBRARY_H
#define LIBRARY_H

#include "user.cpp"
#include "Book.cpp"
#include "magazine.cpp"
#include <iostream>
using namespace std;


class Library{
    public:
        Book book1;
        Magazine magazine1;
        User user1;
    public:
        Library();
        string getInfo(string);
        
};


#endif
