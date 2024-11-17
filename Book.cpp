#include "book.h"
#include <iostream>
using namespace std;

//default constructur with inheritance
Book::Book():Item(){
    
}
//here the methods begin
void Book::setAuthor(string _author){
    //setter
    author=_author;
}

void Book::setGender(string _gender){
    //setter
    gender=_gender;
}

string Book::getBookData(){
    //getter
    string mensaje="The title of the book is: "+title+", it is in the hallway: "+hallway+", the author of the book is:"
    +author+", the gender of the book is:"+gender+", the book is available: "+available2;
    return mensaje;
}

