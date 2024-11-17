#include "magazine.h"
#include <iostream>
#include <string>
using namespace std;

//default constructur with inheritance
Magazine::Magazine():Item(){
    
}
//here the methods begin
void Magazine::setType(string _type){
    //setter
    type=_type;
}

void Magazine::setVolume(int _volume){
    //setter
    volume=_volume;
}

string Magazine::getMagazineData(){
    //getter
    string mensaje="The title of the magazine is: "+title+", it is in the hallway: "+hallway+", the volume of the magazine is:"
    +to_string(volume)+", the type of the magazine is:"+type+", the book is available: "+available2;
    return mensaje;
}