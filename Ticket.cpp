#include "Ticket.hpp"

#include<string>
#include<iostream>

Ticket::Ticket(Vehicle* v,ParkingSpot* spot):vehicle(v),spot(spot){};

std::string Ticket::getId() const { return id; };

Vehicle* Ticket::getVehicle() const { return vehicle; };

ParkingSpot* Ticket::getSpot() const { return spot; };