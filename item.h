#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;
//class of the items of the library, it is the supreme class
class Item{
    protected:
        bool available;
        string title;
        string hallway;
        string available2;
    public:
        Item();
        Item(bool, string, string);
        void setTitle(string);
        void setHallway(string);
        string getItemData();
        void setAvailable(bool);
        string getAvailable();
};


#endif
