#include "book.h"
#include <iostream>
using namespace std;

Book::Book(string _title,string _hallway, string _author,string _gender):Item(_title,_hallway){
    author=_author;
    gender=_gender;
}

void Book::setAuthor(string){
    
}
void Book::setGender(string){
    
}
string Book::getBookData(){
    return title,hallway,author,gender;
}
