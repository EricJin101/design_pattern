// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#include "vehicle_builder.h"

/* Builder is responsible for constructing the smaller parts */
//class Builder
//{
//public:
//    virtual Wheel* getWheel() = 0;
//    virtual Engine* getEngine() = 0;
//    virtual Body* getBody() = 0;
//};

/* Final product -- a car */
class Car
{
public:
    Wheel*   wheels[4];
    Engine*  engine;
    Body* body;

    void specifications()
    {
        std::cout << "body:" << body->shape << std::endl;
        std::cout << "engine horsepower:" << engine->horsepower << std::endl;
        std::cout << "engine hlayouts:" << engine->layouts << engine->cylinders << std::endl;
        std::cout << "tire size:" << wheels[0]->size << "'" << std::endl;
    }
};