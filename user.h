#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class User{
    public:
        string userId;
        bool borrow;
        bool returns;
    public:
        User(string,bool,bool);
        void setUserId(string);
        void setBorrow(bool);
        void setReturns(bool);
        string getUserId();
};


#endif