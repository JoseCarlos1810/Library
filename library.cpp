#include "library.h"
#include <iostream>
using namespace std;
//default constructor with conposition
Library::Library(){

}
//here the methods begin
void Library::addBook(Book book, int lenght){
    //this will add a book to the array of the books
    books[lenght]=book;
}

void Library::addMagazine(Magazine magazine, int lenght){
    //this will add a book to the array of the magazine
    magazines[lenght]=magazine;
}

void Library::addUser(User user, int lenght){
    //this will add a book to the array of the users
    users[lenght]=user;
}

string Library::getBooksInfo(int cont){
    //this will get all the info of the books in the array and fuse all the info in one message
    stringstream aux;
    for(int i = 0 ; i <cont; i++){
        aux <<"Book " << i <<": "<< books[i].getBookData()<<"\n "<<endl;
    }
    return aux.str();
}

string Library::getMagazinesInfo(int cont){
    //this will get all the info of the magazines in the array and fuse all the info in one message
    stringstream aux;
    for(int i = 0 ; i <cont; i++){
        aux <<"Magazine " << i<<": " << magazines[i].getMagazineData()<<"\n "<< endl;
    }
    return aux.str();
}

string Library::getUsersInfo(int cont){
    //this will get all the info of the users in the array and fuse all the info in one message
    stringstream aux;
    for(int i = 0 ; i <cont; i++){
        aux <<"User " << i <<": "<< users[i].getUserData()<<"\n "<< endl;
    }
    return aux.str();
}
