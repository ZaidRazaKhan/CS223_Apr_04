#ifndef _TripDetails_h
#define _TripDetails_h
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;


class TripDetails{
private:
    string goingFrom;
    string goingTo;
    string purpose;
    string duration;
    string phase;
    string tripMentor;
    int moneyNeeded;
    int moneySpent;
public:
    TripDetails();
    TripDetails(bool flag);
    void changePhase(int kharch);
    string getPhase();
    string getGoingFrom();
    string getGoingTo();
    string getDuration();
    string getPurpose();
    int getMoneyNeeded();
    void setDuration(string dur);
    void setPurpose(string pur);
    void setTripMentor(string ment);

};
#endif
