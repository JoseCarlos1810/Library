#include "item.h"
#include <iostream>
using namespace std;

//default constructur
Item::Item(){
    
}
//here the methods begin
void Item::setTitle(string _title){
    //setter
    title=_title;
}

void Item::setHallway(string _hallway){
    //setter
    hallway=_hallway;
}

void Item::setAvailable(bool _available){
    //setter
    available=_available;
    if (available==true)
        available2="true";
    else
        available2="false";
}

string Item::getItemData(){
    //getter
    string mensaje="The title of the item is: "+title+", it is in the hallway: "+hallway+", the item is available: "+available2;
    return mensaje;
}


