#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

class Item{
    protected:
        string title;
        string hallway;
    public:
        Item(string,string);
        void setTitle(string);
        void setHallway(string);
        string getItemData();
};


#endif