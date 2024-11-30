#include "Functionalities.h"

void addVehicle(VehicleContainer& vehicles, const std::string& id, EngineType type, const std::string& make,
                const std::string& model, int year, int permit_duration)
{
    vehicles[id] = std::make_shared<Vehicle>(id, type, make, model, year, permit_duration);
}

void editVehicle(VehicleContainer& vehicles, const std::string& id, EngineType type, const std::string& make,
                 const std::string& model, int year, int permit_duration)
{
    auto it = vehicles.find(id);
    if (it != vehicles.end()) {
        it->second->setEngineType(type);
        it->second->setMake(make);
        it->second->setModel(model);
        it->second->setYear(year);
        it->second->setPermitDuration(permit_duration);
    }
}

void removeVehicle(VehicleContainer& vehicles, const std::string& id)
{
    vehicles.erase(id);
}

VehiclePointer searchVehicleById(const VehicleContainer& vehicles, const std::string& id)
{
    auto it = vehicles.find(id);
    if (it != vehicles.end()) {
        return it->second;
    }
    return nullptr;
}

std::vector<VehiclePointer> searchVehiclesByType(const VehicleContainer& vehicles, EngineType type)
{
    std::vector<VehiclePointer> result;
    for (const auto& pair : vehicles) {
        if (pair.second->getEngineType() == type) {
            result.push_back(pair.second);
        }
    }
    return result;
}

std::pair<VehiclePointer, VehiclePointer> findMinMaxPermitDuration(const VehicleContainer& vehicles)
{
    VehiclePointer min_vehicle = nullptr;
    VehiclePointer max_vehicle = nullptr;
    for (const auto& pair : vehicles) {
        if (!min_vehicle || pair.second->getPermitDuration().getDuration() < min_vehicle->getPermitDuration().getDuration()) {
            min_vehicle = pair.second;
        }
        if (!max_vehicle || pair.second->getPermitDuration().getDuration() > max_vehicle->getPermitDuration().getDuration()) {
            max_vehicle = pair.second;
        }
    }
    return {min_vehicle, max_vehicle};
}
