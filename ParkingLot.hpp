#ifndef PARKING_LOT_HPP
#define PARKING_LOT_HPP


#include<iostream>
#include<vector>


#include "ParkingLot.hpp"
#include "Vehicle.hpp"
#include "Ticket.hpp"

class ParkingLot{
    private:
        std::vector<ParkingSpot*> parkingSpots;
    public:
        ParkingLot(const int compactType,const int standardType,const int heavyType);

        ParkingSpot* findAvailableSpot(Vehicle* Vehicle);


        void displayStatus() const;


        virtual ~ParkingLot()=default;
        
};

#endif