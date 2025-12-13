#include "ParkingLot.hpp"
#include "ParkingSpot.hpp"

#include<iostream>
#include<vector>



ParkingLot::ParkingLot(const int compactType,const int standardType,const int heavyType){
    int spotNumber=1;

    for(int i=0;i<compactType;i++){
        parkingSpots.emplace_back(new ParkingSpot(spotNumber++,SpotType::COMPACT,true));

    }
    for(int i=0;i<standardType;i++){
        parkingSpots.emplace_back(new ParkingSpot(spotNumber++,SpotType::STANDARD,true));
    }
    for(int i=0;i<heavyType;i++){
        parkingSpots.emplace_back(new ParkingSpot(spotNumber++,SpotType::HEAVY,true));
    }
    std::cout<<"welcome to your parking lot"<<std::endl;
}

ParkingSpot* ParkingLot::findAvailableSpot(Vehicle* vehicle){
    if(vehicle==nullptr){
        std::cout<<"Sorry please provide vehicle"<<std::endl;
        return  nullptr;
    }
    
    for(auto& spot:parkingSpots){
        if(spot->isAvailable() && static_cast<int>(spot->getType())>=static_cast<int>(vehicle->getType())){
            return spot;


        }
    }
    std::cout<<"Sorry spots are filled"<<std::endl;
    return nullptr;
}

void ParkingLot::displayStatus() const{
    for(auto& spot:parkingSpots){
        std::cout<<"SpotNumeber : "<<spot->getSpotNumber()<<std::endl;
        std::cout<<"Spot Status : "<<(!spot->isAvailable()?"Occupied":"Free")<<std::endl;
        if(!spot->isAvailable()){
            std::cout<<"Vehicle Details : "<<std::endl;
            std::cout<<" Vehicle Lisense No : "<<spot->getVehicle()->getLicenseNumber()<<std::endl;
            std::cout<<" Vehicle Owner Name : "<<spot->getVehicle()->getOwnerName()<<std::endl;
        }
        std::cout<<std::endl<<std::endl;
        std::cout<<"_____________________________________________________________________"<<std::endl<<std::endl;
    }
}