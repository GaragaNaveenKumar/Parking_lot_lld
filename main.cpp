#include<bits/stdc++.h>
#include "ParkingLot.hpp"
#include "ParkingSpot.hpp"
#include "Vehicle.hpp"
#include "Ticket.hpp"
#include "Payment.hpp"

using namespace std;

int main(){
    

    ParkingLot* p=new ParkingLot(2,2,2);
    

    Vehicle* v1=new Car("C0001","john");
    ParkingSpot* spot=p->findAvailableSpot(v1);
    Ticket* t1=spot->parkVehicle(v1);
    t1->display();
    CardPayment cp;
    cp.checkoutPayment(t1);

    p->displayStatus();


    
    return 0;
}