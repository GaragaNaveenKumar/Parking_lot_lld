#ifndef PARKING_SPOT_HPP
#define PARKING_SPOT_HPP

#include "Vehicle.hpp"

enum class SpotType{
    COMPACT,
    REGULAR,
    LARGE
};


class ParkingSpot{
    private:
        int spotNumber;
        SpotType type;
        Vehicle* vehicle;
        bool available;

    public:
        ParkingSpot(const int spotNumber,SpotType type);

        int getSpotNumber() const;
        SpotType getType() const;
        Vehicle* getVehicle() const;
        bool isAvailable() const;

        void parkVehicle(Vehicle* v);
        void unParkVehicle();
        void display();

        virtual ~ParkingSpot()=default;

        


};




#endif