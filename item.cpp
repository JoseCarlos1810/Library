#include "item.h"
#include <iostream>
using namespace std;

//default constructor
Item::Item(){}
//constructor
Item::Item(bool _available, string _title,string _hallway){
    available=_available;
    title=_title;
    hallway=_hallway;
    if (available==true)
        available2="true";
    else
        available2="false";
}
//here the methods begin
void Item::setTitle(string _title){
    //This is a setter of the title 
    title=_title;
}

void Item::setHallway(string _hallway){
    //This is a setter of the hallway
    hallway=_hallway;
}

void Item::setAvailable(bool _available){
    //This is a setter to see if the item is available
    available=_available;
    if (available==true)
        available2="true";
    else
        available2="false";
}
string Item::getAvailable(){
    //This is a getter of available
    return available2;
}
string Item::getItemData(){
    //This is a getter that return a mesage with all the information of an item
    string mensaje="The title of the item is: "+title+", it is in the hallway: "+hallway+", the item is available: "+available2;
    return mensaje;
}



