#include "Notification.h"

string Notification :: getUsername() {
	return username ;
}

Notification :: Notification(TripDetails &trpDetail,string usrName,bool stat){

   	tripDetails=trpDetail;
    username = usrName ;
    status = stat ;
}
