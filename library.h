#ifndef LIBRARY_H
#define LIBRARY_H

#include "sstream"
#include "user.cpp"
#include "book.cpp"
#include "magazine.cpp"
#include <iostream>
using namespace std;

//The class library is the central class, it has conpositions
class Library{
    private:
        //this are the arrays of the items and users and their sizes
        Book books[4];
        Magazine magazines[4];
        User users[4];
    public:
        Library();
        string getBooksInfo(int);
        string getMagazinesInfo(int);
        string getUsersInfo(int);
        void addBook(Book, int);
        void addMagazine(Magazine, int);
        void addUser(User, int);
        
};


#endif
