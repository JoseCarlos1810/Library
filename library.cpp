#include "library.h"
#include <iostream>
using namespace std;

Library::Library(bool _available){
    available=_available;
}

void Library::setAvailable(bool){

}

bool Library::getAvailable(){
    return available;
}