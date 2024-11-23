#ifndef MAGAZINE_H
#define MAGAZINE_H
#include "item.h"
#include <iostream>
using namespace std;
//class of the magazines of the library, it has inheritance from item
class Magazine:public Item{
    private:
        string type;
        int volume;
    public:
        Magazine();
        Magazine( bool, string, string, string, int);
        void setType(string);
        void setVolume(int);
        string getMagazineData();
};


#endif
