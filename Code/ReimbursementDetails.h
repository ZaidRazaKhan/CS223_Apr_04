#ifndef _ReimbursementDetails_h
#define _ReimbursementDetails_h
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;

/*
int stoi_1(string s) { 
	int num = 0 ; 
	for(int i = 0 ;i < s.size() ;++i) { 
		num = 10*num + (s[i]-'0');
	}
	return num;
}*/
class ReimbursementDetails
{
	public:

		string username;

		string goingFrom;

		string goingTo;

		string purpose;

		string phase;

		int moneyNeeded;		/// add a field status here.

		string status;

	public:
		ReimbursementDetails(){}
		ReimbursementDetails(string,string,string,string,string,int,string);

		string getUsername();

		string getGoingFrom();

		string getGoingTo();

		string getPurpose();

		string getPhase();

		int getMoneyNeeded();

		void printReimbursementDetails();

		void  setMoneyNeeded(int);

		void  setUsername(string);

		void  setGoingFrom(string);

		void  setGoingTo(string);

		void  setPurpose(string);

		void  setPhase(string);


};
#endif
