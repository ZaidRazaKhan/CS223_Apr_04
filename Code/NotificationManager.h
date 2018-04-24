#ifndef _NotificationManager_h
#define _NotificationManager_h
#include<bits/stdc++.h>
#include<unistd.h>
#include "TripDetails.h"
#include "Notification.h"
#include "ReimbursementDetails.h"
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
}*/
class NotificationManager{
public:

	void sendNotification(TripDetails &trp,Notification nm);
	void deleteNotification(Notification nm);
    	void editNotification();
	string itos(int n);
	int stoi_1(string s);
};
#endif
