#ifndef _Notification_h
#define _Notification_h
#include<bits/stdc++.h>
#include<unistd.h>

//#include "Application.h"
#include "TripDetails.h"
using namespace std;
class Notification{
private:
    	TripDetails tripDetails;
    	bool status;
    	string username;
public:
	string getUsername();
	Notification(TripDetails & trpDetail,string usrName,bool stat);
};
#endif
