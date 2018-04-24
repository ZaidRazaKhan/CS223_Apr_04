#ifndef _Professor_h
#define _Professor_h
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#pragma once

#include "User.h"

class Professor: public User{
public :
    string position;

	Professor(string t);
    Professor(bool flag);
    void setPosition(string pst);
    string getPosition();
};
#endif
