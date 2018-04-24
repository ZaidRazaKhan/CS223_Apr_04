#ifndef _DataBaseAccessLayer_h
#define _DataBaseAccessLayer_h

#include<bits/stdc++.h>
#include<unistd.h>
#include "User.h"
#include "Student.h"
#include "Professor.h"
#include "Staff.h"
#include "ReimbursementDetails.h"
//#include "Application.h"
//#include "Validate.h"
using namespace std;
/*string itos(int n) {
    string ans="";
    while(n)
    {
        int dig = n%10;
        ans += (char)('0'+dig);
        n/=10;
    }
    return ans ;
}
int stoi_1(string s) { 
	int num = 0 ; 
	for(int i = 0 ;i < s.size() ;++i) { 
		num = 10*num + (s[i]-'0');
	}
	return num;
}
*/
class DataBaseAccessLayer{
	public:

			DataBaseAccessLayer();
			User *usr;
	
			set<string>usernameDatabase;

			void addUser(User*,int);

			User *fetchData(string);

			vector<ReimbursementDetails> fetchNotificationsForUser(string);

			vector<ReimbursementDetails> fetchAllNotificationsForAdmin();

			void updateNotification(ReimbursementDetails &Rd,int number);

			string itos(int n);
			
			int stoi_1(string s) ;
};
#endif
