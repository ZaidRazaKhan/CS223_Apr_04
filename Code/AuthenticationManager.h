#ifndef _AuthenticationManager_h
#define _AuthenticationManager_h
#include<bits/stdc++.h>
//#include "Application.h"
#include<unistd.h>
#include "Credentials.h"
#include "User.h"
using namespace std;

class AuthenticationManager{
	public :

		bool authenticateLoginDetails(Credentials);

		bool authenticateChangePasswordResponse(User currentUser,string);  /// if user wants to change the password, then this function asks the user for the answer of security quesiton atmist 3 times
		           /// application class mein 3 chcks for password


};
#endif
