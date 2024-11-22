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
        User();
        void setUserId(string);
        void setBorrow(bool);
        void setReturns(bool);
        string getUserInfo();
};


#endif
