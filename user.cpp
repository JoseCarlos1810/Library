#include "user.h"
#include <iostream>
using namespace std;

User::User(string _userId,bool _borrow, bool _returns){
    userId=_userId;
    borrow=_borrow;
    returns=_returns;
}

void User::setUserId(string){
    
}

void User::setBorrow(bool){
    
}

void User::setReturns(bool){
    
}

string User::getUserId(){
    return userId;
}