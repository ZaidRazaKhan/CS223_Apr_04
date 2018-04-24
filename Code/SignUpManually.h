#ifndef _SignUpManually_h
#define _SignUpManually_h
#include<bits/stdc++.h>
#include<unistd.h>
#include "RegistrationManager.h"
#include "Application.h"
#include "Student.h"
#include "Professor.h"
#include "Staff.h"
using namespace std;


class SignUpManually: public RegistrationManager{
	public:
	   	 void registration();
};
#endif
