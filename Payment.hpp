#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include<iostream>
#include<string>
#include "Ticket.hpp"
#include<chrono>
#include<iomanip>
#include <ctime>
using namespace std;
using namespace std::chrono;



std::string formatTime(std::chrono::system_clock::time_point tp) {
    time_t t = std::chrono::system_clock::to_time_t(tp);
    tm *ltm = localtime(&t);

    std::ostringstream oss;
    oss << std::put_time(ltm, "%d-%m-%Y %H:%M:%S");
    return oss.str();
};


class Payment{
    private:
        std::string id;
        Ticket* ticket;
    public:
        virtual void checkoutPayment(Ticket* ticket)=0;
        double calculateFeeAndPrintBill(Ticket* ticket);
        
        
        
};

double Payment::calculateFeeAndPrintBill(Ticket* ticket){
    auto startTime=ticket->getParkedTime();

    auto endTime = std::chrono::system_clock::now();

    
    auto duration = endTime - startTime;   

    
    double hours =std::chrono::duration<double, std::ratio<3600>>(duration).count();


    double pricePerHour=static_cast<int>(ticket->getVehicle()->getType())+1*10;

    double totalPrice=hours*pricePerHour;

    cout << "\n----- Parking Bill -----\n";
    cout << "Start Time : " << formatTime(startTime) << "\n";
    cout << "End Time   : " << formatTime(endTime) << "\n";
    cout << "Duration   : " << fixed << setprecision(2)
         << hours << " hours\n";
    cout << "Bill Hours : " << hours << " hour(s)\n";
    cout << "Rate       : ₹" << pricePerHour << "/hour\n";
    cout << "Total Bill : ₹" << totalPrice << "\n";
    cout << "------------------------\n";

    return totalPrice;



};

class CashPayment:public Payment{
    public:
        void checkoutPayment(Ticket* ticket) override{
            std::cout<<"Payment is successfull through cash"<<std::endl;
            calculateFeeAndPrintBill(ticket);

        }

};


class CardPayment:public Payment{
    public:
        void checkoutPayment(Ticket* ticket) override{
            std::cout<<"Payment is successfull through card"<<std::endl;
            calculateFeeAndPrintBill(ticket);
        }
};



class UpiPayment:public Payment{
    public:
        void checkoutPayment(Ticket* ticket) override{
            std::cout<<"Payment is successful through UPI"<<std::endl;
            calculateFeeAndPrintBill(ticket);
        }
};

#endif