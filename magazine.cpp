#include "magazine.h"
#include <iostream>
using namespace std;

Magazine::Magazine(string _title,string _hallway, string _type,string _volume):Item(_title,_hallway){
    type=_type;
    volume=volume;
}

void Magazine::setType(string){
    
}

void Magazine::setVolume(int){
    
}

string Magazine::getMagazineData(){
    return title,hallway,type,volume;
}