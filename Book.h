#ifndef BOOK_H
#define BOOK_H

#include "item.h"
#include <iostream>
using namespace std;
//class of the books of the library, it has inheritance from item
class Book:public Item{
    private:
        string author;
        string gender;
    public:
        Book();
        Book(bool, string, string, string, string);
        void setAuthor(string);
        void setGender(string);
        string getBookData();
};



#endif
