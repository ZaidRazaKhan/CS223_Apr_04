#ifndef _SimpleLogger_h
#define _SimpleLogger_h
#include<bits/stdc++.h>
#include<unistd.h>
//#include "LoginManager.h"
#include "DataBaseAccessLayer.h"
#include "AuthenticationManager.h"
#include "User.h"
#include "Credentials.h"
//#include "Application.h"
using namespace std;



class SimpleLogger: public AuthenticationManager{
public :

    Credentials userCred ;
    string s1,s2 ;
	User *usr;
   	User* login();
};
#endif
