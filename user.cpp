#include "user.h"
#include <iostream>
using namespace std;
//default constructor
User::User(){}
//constructor
User::User(string _userId, bool _borrow, bool _returns){
    userId=_userId;
    borrow=_borrow;
    returns=_returns;
}
//here the methods begin
void User::setUserId(string _userId){
    //This is a setter of the Id of the user
    userId=_userId;
}

void User::setBorrow(bool _borrow){
    //This is a setter to see if the user borrowed something
    borrow=_borrow;
}

void User::setReturns(bool _returns){
    //This is a setter to see if the user returned what he borrowed
    returns=_returns;
}

string User::getUserData(){
    //This is a getter that return a mesage with all the information of a user
    string mensaje="The user id is: "+userId;
    return mensaje;
}
