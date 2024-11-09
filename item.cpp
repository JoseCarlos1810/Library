#include "item.h"
#include <iostream>
using namespace std;

Item::Item(string _title,string _hallway){
    title=_title;
    hallway=_hallway;
}

void Item::setTitle(string){
    
}

void Item::setHallway(string){
    
}

string Item::getItemData(){
    return title,hallway;
}

