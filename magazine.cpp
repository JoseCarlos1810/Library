#include "magazine.h"
#include <iostream>
#include <string>
using namespace std;

//default constructor with inheritance
Magazine::Magazine():Item(){}
//constructor with inheritance
Magazine::Magazine(bool _available, string _title, string _hallway, string _type, int _volume):Item(_available, _title, _hallway){
    type=_type;
    volume=_volume;
}
//here the methods begin
void Magazine::setType(string _type){
    //This is a setter of the type of the magazine
    type=_type;
}

void Magazine::setVolume(int _volume){
    //This is a setter of the volume of the magazine
    volume=_volume;
}

string Magazine::getMagazineData(){
    //This is a getter that return a mesage with all the information of a magazine
    string mensaje="The title of the magazine is: "+title+", it is in the hallway: "+hallway+", \nthe volume of the magazine is: "
    +to_string(volume)+", the type of the magazine is: "+type+", \nthe magazine is available: "+available2;
    return mensaje;
}
