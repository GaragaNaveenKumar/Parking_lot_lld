#include "Vehicle.hpp"
#include<iostream>
#include<string>


//vechicle constructor
Vehicle::Vehicle(std::string licensePlate,VehicleType type,std::string color):licensePlate(licensePlate),type(type),color(color){}

//getlicenseplate function definition
std::string Vehicle::getLicensePlate()const {return licensePlate; }

//gettype function definition
VehicleType Vehicle::getType()const {return type;}

//getcolor function definition
std::string Vehicle::getColor() const{return color;}

//displayInfo function definition
void Vehicle::displayInfo() const {
    std::cout<<"Vehicle  "<< color<<" ";
    switch (type) {
        case VehicleType::CAR: std::cout << "Car"; break;
        case VehicleType::MOTORCYCLE: std::cout << "Motorcycle"; break;
        case VehicleType::TRUCK: std::cout << "Truck"; break;
        case VehicleType::BUS: std::cout << "Bus"; break;
    }
    std::cout << " (License: " << licensePlate << ")" << std::endl;
    
}


