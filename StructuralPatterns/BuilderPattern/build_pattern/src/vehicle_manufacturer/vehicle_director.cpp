// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#include "vehicle_director.h"
#include "vehicle_builder.cpp"
/* Director is responsible for the whole process */
class Director
{
    Builder* builder;

public:
    void setBuilder(Builder* newBuilder)
    {
        builder = newBuilder;
    }

    Car* getCar()
    {
        Car* car = new Car();

        car->body = builder->getBody();

        car->engine = builder->getEngine();

        car->wheels[0] = builder->getWheel();
        car->wheels[1] = builder->getWheel();
        car->wheels[2] = builder->getWheel();
        car->wheels[3] = builder->getWheel();

        return car;
    }
};