#ifndef _Staff_h
#define _Staff_h

#include<bits/stdc++.h>
#include<unistd.h>
#include "User.h"
//#pragma once
using namespace std;



class Staff: public User{
public:
    string position;
    Staff(string t);
    Staff(bool flag);
    void setPosition(string pst);
    string getPosition();
};
#endif
