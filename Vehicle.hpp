#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include<string>

enum class VehicleType{
    COMPACT=0,
    STANDARD=1,
    HEAVY=2
};

class Vehicle{
    private:
        std::string licenseNumber;
        std::string ownerName;
    public:
        Vehicle(const std::string license,const std::string owner):licenseNumber(license
        ),ownerName(owner){};
        std::string getLicenseNumber() const{return licenseNumber;};
        std::string getOwnerName() const {return ownerName;};
        virtual VehicleType getType()const=0;

        virtual ~Vehicle()=default;
};

class Car:public Vehicle{
    public:
        Car(const std::string license,const std::string owner):Vehicle(license,owner){};
        VehicleType getType() const override {return VehicleType::STANDARD;};

        

};

class Bus:public Vehicle{
    public:
        Bus(const std::string license,const std::string owner):Vehicle(license,owner){};

        VehicleType getType() const override { return VehicleType::HEAVY; };

};
class MotorCycle:public Vehicle{
    public:
        MotorCycle(const std::string license,const std::string owner):Vehicle(license,owner){};

        VehicleType getType() const override { return VehicleType::COMPACT; };
};




#endif