#include "Credentials.h"
void Credentials :: getCredentials(string s1, string s2) {
	cout << "Please enter the Credentials : "  << endl;
	cout << "Username : ";
	getline(cin,s1,'\n');
	username = s1;
	cout << "Password : " ;
//	getline(cin,s2,'\n');
	s2=getpass("Please enter the password : ");
	password = s2 ;
}