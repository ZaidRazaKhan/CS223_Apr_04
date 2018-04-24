#ifndef _User_h
#define _User_h
#include<bits/stdc++.h>
#include<unistd.h>
#include<cstdlib>

using namespace std;
#define MaxMoney 15000

//#include "Application.h"
/*static bool isValidMobileNumber(string num) {

	/// check if all chars are between 0 and 9
	for(int i = 0 ; i < num.size() ; ++i ) if(!(num[i] >= '0' and num[i] <= '9')) return false; return (num.size() == 10) ;
}*/
//#include "Validate.h"
//set<string>usernameDatabase;
/*fstream ip("UsernameDatabase.txt") ;

string tempUsername;
while(!ip.eof()) {
	ip >> tempUsername ;
	usernameDatabase.insert(tempUsername);
}
ip.close();*/
class User{

	public:
	    string username;

	    string name;

	    string password;

	    string securityQuestion;

	    string securityAnswer;

	    int allowanceMoneyRemaining;

	    string mobileNumber;

	    set<string>usernameDatabase;

	public:
		User();
		/// make a contructor and load all theses details from the files

		User(bool flag);

	    void setName(string nm);
	    string getName();
	    void setUsername(string nm);
	    string getUsername();
	    void setPassword(string pass);
	    string getPassword();
	    void setSecurityQuestion(string sQn);
	    string getSecurityQuestion();
	    void setSecurityAnswer(string seqAns);
	    string getSecurityAnswer() ;
	    void setAllowanceMoneyRemaining(int allowanceMoneyRemainingUpdated);
	    int getAllowanceMoneyRemaining();
	    void setMobileNumber(string mN);
	    string getMobileNumber();
	    bool isValidMobileNumber(string num) ;

};
#endif
