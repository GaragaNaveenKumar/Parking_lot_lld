#ifndef PARKING_SPOT_HPP
#define PARKING_SPOT_HPP

#include "Vehicle.hpp"
#include "Ticket.hpp"

enum class SpotType{
    COMPACT=0,
    STANDARD=1,
    HEAVY=2
    
};


class ParkingSpot{
    private:
        int spotNumber;
        SpotType type;
        Vehicle* vehicle;
        bool available;

    public:
        ParkingSpot(const int spotNumber,SpotType type,bool availability);

        int getSpotNumber() const;
        SpotType getType() const;
        Vehicle* getVehicle() const;
        bool isAvailable() const;

        Ticket* parkVehicle(Vehicle* v);
        void unParkVehicle();
        void display();

        virtual ~ParkingSpot()=default;

        


};




#endif