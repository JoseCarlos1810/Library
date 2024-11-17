#include "user.h"
#include <iostream>
using namespace std;
//default constructur
User::User(){

}
//here the methods begin
void User::setUserId(string _userId){
    //setter
    userId=_userId;
}

void User::setBorrow(bool _borrow){
    //setter
    borrow=_borrow;
}

void User::setReturns(bool _returns){
    //setter
    returns=_returns;
}

string User::getUserInfo(){
    //getter
    string mensaje="The user id is: "+userId;
    return mensaje;
}