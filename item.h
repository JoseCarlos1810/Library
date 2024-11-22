#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;

class Item{
    protected:
        bool available;
        string title;
        string hallway;
        string available2;
    public:
        Item();
        void setTitle(string);
        void setHallway(string);
        string getItemData();
        void setAvailable(bool);
        string getAvailable();
};


#endif
