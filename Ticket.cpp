#include "Ticket.hpp"

#include<string>
#include<iostream>
#include<chrono>


Ticket::Ticket(Vehicle* v,ParkingSpot* spot):vehicle(v),spot(spot){
    id=v->getLicenseNumber()+"_"+std::to_string(spot->getSpotNumber());
    parkedTime=std::chrono::system_clock::now();
};

std::string Ticket::getId() const { return id; };

Vehicle* Ticket::getVehicle() const { return vehicle; };

ParkingSpot* Ticket::getSpot() const { return spot; };

std::chrono::system_clock::time_point Ticket::getParkedTime() const {return parkedTime; };

void Ticket::display()const {
    std::cout<<"Ticket ID : "<<id<<std::endl;
    std::cout<<"SpotNumber : "<<spot->getSpotNumber()<<std::endl;
    std::cout<<"Vehicle License Number : "<<vehicle->getLicenseNumber()<<std::endl;
}