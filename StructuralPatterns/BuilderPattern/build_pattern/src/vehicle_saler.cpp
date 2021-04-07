// Copyright (c) 2021 Trunk.Tech. All rights reserved.
//

#include "vehicle_saler.h"

/* Concrete builder for Nissan family cars */
class NissanBuilder : public Builder
{
public:
    Wheel* getWheel() override
    {//Clang-Tidy: Use auto when initializing with new to avoid duplicating the type name
        //Wheel* wheel = new Wheel();
        auto* wheel = new Wheel();
        wheel->size = 22;
        return wheel;
    }

    Engine* getEngine() override
    {
        auto* engine = new Engine();
        engine->horsepower = 850;
        engine->cylinders = 8;
        engine->layouts = "V";
        return engine;
    }

    Body* getBody() override
    {
        auto* body = new Body();
        body->shape = "GTR";
        return body;
    }
};

class VolvoBuilder : public Builder
{
    Wheel* getWheel() override
    {
        auto* wheel = new Wheel();
        wheel->size = 19;
        return wheel;
    }

    Engine* getEngine() override
    {
        auto* engine = new Engine();
        engine->horsepower = 390;
        engine->layouts = "V";
        engine->cylinders = 4;
        return engine;
    }

    Body* getBody() override
    {
        auto* body = new Body();
        body->shape = "S90";
        return body;
    }
};