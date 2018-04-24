#ifndef _Application_h
#define _Application_h
#include<bits/stdc++.h>
#include<unistd.h>
#include "User.h"
#include "NotificationManager.h"
#include "AuthenticationManager.h"
#include "RegistrationManager.h"
#include "SignUpManually.h"
#include "DataBaseAccessLayer.h"
#include "SimpleLogger.h"
using namespace std;
/*string getPassword() {

	string pass=getpass("Please enter the password : ");
	// cin>>pass;
	return pass ;
}*/
//User *usr;
//extern map<string,string> passwordDatabase; /// for storing passwords of users
//extern map<string,string> securityQuestionDatabase;
//extern map<string,string> securityAnswerDatabase;
//extern set<string> usernameDatabase;
//extern User * usr;
//extern RegistrationManager * rm;
//extern DataBaseAccessLayer * dbal;
//extern LoginManager * lm;
//extern NotificationManager *Nm;

//set<string>usernameDatabase;
//fstream ip("UsernameDatabase.txt") ;

//string tempUsername ;
//while(!ip.eof()) {
//	ip >> tempUsername ;
//	usernameDatabase.insert(tempUsername);
//}
//ip.close();
class Application{

private :
	string currentPageType;
	string previousPageType;
	string adminPass;
	string tempForDebugging;
	User *usr;
	RegistrationManager * rm;
	DataBaseAccessLayer * dbal;
	SimpleLogger * lm;
	NotificationManager *Nm;
	set<string>usernameDatabase;
public:

	Application();
	void goToPage(string);
	void registerUser();
	void login() ;
	void loginAsAdmin() ;
	void resetPassword() ;
	void start() ;
	void forgotPassword() ;
	void applyForReimbursement() ;
	void viewReimbursementInventory(string); /// string will be user or admin, for user, call fetchNotificationsForUser() else call fetchAllNotificationsForAdmin()
	void updateReimbursement(string);
	void cancelRequest() ;   /// i dont't know the use of this method ;
};
#endif
