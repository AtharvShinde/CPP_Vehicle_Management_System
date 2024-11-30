#include "Vehicle.h"

// Parameterized constructor
Vehicle::Vehicle(const std::string& vehicle_id, EngineType engine_type, const std::string& make,
                 const std::string& model, int year, int permit_duration)
    : _vehicle_id(vehicle_id), _engine_type(engine_type), _make(make), _model(model),
      _year(year), _permit_duration(permit_duration) {}

// Getters and Setters
std::string Vehicle::getVehicleId() const { return _vehicle_id; }
void Vehicle::setVehicleId(const std::string& vehicle_id) { _vehicle_id = vehicle_id; }

EngineType Vehicle::getEngineType() const { return _engine_type; }
void Vehicle::setEngineType(EngineType engine_type) { _engine_type = engine_type; }

std::string Vehicle::getMake() const { return _make; }
void Vehicle::setMake(const std::string& make) { _make = make; }

std::string Vehicle::getModel() const { return _model; }
void Vehicle::setModel(const std::string& model) { _model = model; }

int Vehicle::getYear() const { return _year; }
void Vehicle::setYear(int year) { _year = year; }

PermitDuration Vehicle::getPermitDuration() const { return _permit_duration; }
void Vehicle::setPermitDuration(int duration) { _permit_duration.setDuration(duration); }

// Display vehicle details
void Vehicle::displayDetails() const
{
    std::cout << "Vehicle ID: " << _vehicle_id << "\n"
              << "Engine Type: " << static_cast<int>(_engine_type) << "\n"
              << "Make: " << _make << "\n"
              << "Model: " << _model << "\n"
              << "Year: " << _year << "\n"
              << "Permit Duration: " << _permit_duration << "\n";
}
