#ifndef BOOK_H
#define BOOK_H

#include "item.h"
#include <iostream>
using namespace std;

class Book:public Item{
    private:
        string author;
        string gender;
    public:
        Book(string,string,string,string);
        void setAuthor(string);
        void setGender(string);
        string getBookData();
};



#endif