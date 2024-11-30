#ifndef VEHICLE_H
#define VEHICLE_H

#include "EngineType.h"
#include "PermitDuration.h"
#include <string>

struct Vehicle
{
    std::string id;
    EngineType engine_type;
    std::string make;
    std::string model;
    int year;
    PermitDuration permit_duration;
}
#endif // VEHICLE_H
