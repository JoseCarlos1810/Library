#ifndef LIBRARY_H
#define LIBRARY_H

#include "user.h"
#include "book.h"
#include "magazine.h"
#include <iostream>
using namespace std;


class Library{
    public:
        bool available;
        Book book;
        Magazine magazine;
        User user;
    public:
        Library(bool);
        void setAvailable(bool);
        bool getAvailable();
};


#endif