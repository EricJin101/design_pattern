// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#ifndef BUILDERPATTERN_VEHICLE_BUILDER_H
#define BUILDERPATTERN_VEHICLE_BUILDER_H

#include "builders/vehicle_engine.cpp"
#include "builders/vehicle_frame.cpp"
#include "builders/vehicle_wheel.cpp"
class vehicle_builder {

};

class Builder
{
public:
    virtual Wheel* getWheel() = 0;
    virtual Engine* getEngine() = 0;
    virtual Body* getBody() = 0;
};
#endif //BUILDERPATTERN_VEHICLE_BUILDER_H
