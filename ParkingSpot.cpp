#include "ParkingSpot.hpp"
#include<iostream>
#include<string>

ParkingSpot::ParkingSpot(const int number,SpotType type):spotNumber(number),type(type){};

int ParkingSpot::getSpotNumber() const { return spotNumber ;};
SpotType ParkingSpot::getType() const { return type; };
bool ParkingSpot::isAvailable() const { return available; };
Vehicle* ParkingSpot::getVehicle() const {return vehicle; };


void ParkingSpot::parkVehicle(Vehicle* v){
    vehicle=v;
    available=false;

    return;

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

