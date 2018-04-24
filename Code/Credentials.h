#ifndef _Credentials_h
#define _Credentials_h
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

//#include "Application.h"
/*string getPassword() {

	string pass=getpass("Please enter the password : ");
	// cin>>pass;
	return pass ;
}
*/
class Credentials{
	public :
		string username;

		string password;

		void getCredentials(string,string);
};
#endif
