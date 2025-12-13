#include "ParkingSpot.hpp"
#include "Ticket.hpp"
#include<iostream>
#include<string>

ParkingSpot::ParkingSpot(const int number,SpotType type,bool availability):spotNumber(number),type(type),available(availability){};

int ParkingSpot::getSpotNumber() const { return spotNumber ;};
SpotType ParkingSpot::getType() const { return type; };
bool ParkingSpot::isAvailable() const { return available; };
Vehicle* ParkingSpot::getVehicle() const {return vehicle; };


Ticket* ParkingSpot::parkVehicle(Vehicle* v){
    vehicle=v;
    available=false;
    return nullptr;

    return new Ticket(vehicle,this);

};

void ParkingSpot::unParkVehicle(){
    if(available==true){
        return;
    }
    delete vehicle;
    available=true;
    return;


};

void ParkingSpot::display(){
    std::cout<<"future development";
};

