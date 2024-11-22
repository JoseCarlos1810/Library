#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "item.h"
#include <iostream>
using namespace std;

class Magazine:public Item{
    private:
        string type;
        int volume;
    public:
        Magazine();
        void setType(string);
        void setVolume(int);
        string getMagazineData();
};


#endif
