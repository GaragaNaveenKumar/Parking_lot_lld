#ifndef TICKET_HPP
#define TICKET_HPP

#include "Vehicle.hpp"
#include "ParkingSpot.hpp"

#include <chrono>
#include <ctime>
#include <iomanip>



class Ticket{
    private:
        std::string id;
        Vehicle* vehicle;
        ParkingSpot* spot;
        std::chrono::system_clock::time_point parkedTime;
        
    public:
        Ticket()=default;

        Ticket(Vehicle* v,ParkingSpot* spot);
        std::string getId() const;
        Vehicle* getVehicle() const;
        ParkingSpot* getSpot() const;
        std::chrono::system_clock::time_point getParkedTime() const;

        void display() const;

        virtual ~Ticket()=default;


};


#endif