#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "item.h"
#include <iostream>
using namespace std;

class Magazine:public Item{
    private:
        string type;
        string volume;
    public:
        Magazine(string,string,string,string);
        void setType(string);
        void setVolume(int);
        string getMagazineData();
};


#endif