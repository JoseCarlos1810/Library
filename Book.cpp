#include "book.h"
#include <iostream>
using namespace std;

//default constructor with inheritance
Book::Book():Item(){}

//constructor with inheritance
Book::Book(bool _available, string _title, string _hallway, string _author, string _gender):Item(_available, _title, _hallway){
    author=_author;
    gender=_gender;
}



//here the methods begin
void Book::setAuthor(string _author){
    //This is a setter of the author of the book
    author=_author;
}

void Book::setGender(string _gender){
    //This is a setter of the gender of the book
    gender=_gender;
}

string Book::getBookData(){
    //This is a getter that return a mesage with all the information of a book
    string mensaje="The title of the book is: "+title+", it is in the hallway: "+hallway+", \nthe author of the book is: "
    +author+", the gender of the book is: "+gender+", \nthe book is available: "+available2;
    return mensaje;
}
