#ifndef PARKING_LOT_HPP
#define PARKING_LOT_HPP


#include<iostream>
#include<vector>


#include "ParkingSpot.hpp"
#include "Vehicle.hpp"
#include "Ticket.hpp"

class ParkingLot{
    private:
        std::vector<ParkingSpot*> parkingSpots;
    public:
        ParkingLot()=default;
        ParkingLot(int compactType,int standardType,int heavyType);

        ParkingSpot* findAvailableSpot(Vehicle* vehicle);


        void displayStatus() const;


        ~ParkingLot();
        
};

#endif