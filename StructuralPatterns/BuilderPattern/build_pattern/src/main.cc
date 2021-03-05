#include <iostream>
#include <string>
#include "vehicle_manufacturer/vehicle_director.cpp"
#include "vehicle_saler.cpp"


int main()
{
    std::cout << "设计模式  Builder Pattern." << std::endl;
    Car* car; // Final product
    /* A director who controls the process */
    Director director{};

    /* Concrete builders */
    VolvoBuilder eric_jin_car_1;
    NissanBuilder eric_jin_car_2;

    /* Build a Volvo */
    std::cout << "Volvo" << std::endl;
    director.setBuilder(&eric_jin_car_1);
    car = director.getCar();
    car->specifications();

    std::cout << std::endl;

    /* Build a Nissan GTR*/
    std::cout << "Nissan" << std::endl;
    director.setBuilder(&eric_jin_car_2); // using NissanGTRBuilder instance
    car = director.getCar();
    car->specifications();

    return 0;
}

