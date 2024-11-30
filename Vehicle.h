#ifndef VEHICLE_H
#define VEHICLE_H

#include "EngineType.h"
#include "PermitDuration.h"
#include <iostream>
#include <string>
#include <memory>
#include <vector>

class Vehicle
{
private:
    std::string _vehicle_id;
    EngineType _engine_type;
    std::string _make;
    std::string _model;
    int _year;
    PermitDuration _permit_duration;

public:
    Vehicle() = delete;
    Vehicle(const std::string& vehicle_id, EngineType engine_type, const std::string& make,
            const std::string& model, int year, int permit_duration);

    std::string getVehicleId() const;
    void setVehicleId(const std::string& vehicle_id);

    EngineType getEngineType() const;
    void setEngineType(EngineType engine_type);

    std::string getMake() const;
    void setMake(const std::string& make);

    std::string getModel() const;
    void setModel(const std::string& model);

    int getYear() const;
    void setYear(int year);

    PermitDuration getPermitDuration() const;
    void setPermitDuration(int duration);

    // Display vehicle details
    void displayDetails() const;
};

#endif // VEHICLE_H
