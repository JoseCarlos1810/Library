#include "library.h"
#include <iostream>
using namespace std;
//default constructur with conposition
Library::Library(){
    book1.setTitle("Odisea");
    book1.setHallway("C1");
    book1.setGender("Odisea");
    book1.setAuthor("Homero");
    book1.setAvailable(true);
    magazine1.setTitle("Expansion");
    magazine1.setHallway("Q1");
    magazine1.setType("Cientifica");
    magazine1.setVolume(10);
    magazine1.setAvailable(true);
    user1.setBorrow(false);
    user1.setReturns(true);
    user1.setUserId("A01708776");
}
//here the methods begin
string Library::getInfo(string option){
    //getter
    if (option=="book")
        return book1.getBookData();
    else if (option=="magazine")
        return magazine1.getMagazineData();
    else
        return user1.getUserInfo();
}

