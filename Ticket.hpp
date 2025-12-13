#ifndef TICKET_HPP
#define TICKET_HPP

#include "Vehicle.hpp"
#include "ParkingSpot.hpp"


class Ticket{
    private:
        std::string id;
        Vehicle* vehicle;
        ParkingSpot* spot;
    public:
        Ticket()=default;

        Ticket(Vehicle* v,ParkingSpot* spot);
        std::string getId() const;
        Vehicle* getVehicle() const;
        ParkingSpot* getSpot() const;

        virtual ~Ticket()=default;


};


#endif