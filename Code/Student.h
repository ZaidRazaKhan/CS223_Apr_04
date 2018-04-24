#ifndef _Student_h
#define _Student_h
#include<bits/stdc++.h>
#include<unistd.h>
#include "User.h"
using namespace std;
#pragma once



class Student : public User {

	public:

	    string rollNumber;

	    char ugPgType;

	    int year;

	public:

	    void setRollNumber(string rN);

	    string getRollNumber();

	    void setYear(int y);

	    int getYear();

	    string getPassword() ;

	    Student (bool flag);

	    Student(string fetchData);

	    bool isValidRollNumber (string s);
};
#endif
