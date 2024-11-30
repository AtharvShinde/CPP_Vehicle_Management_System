#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"
#include <vector>
#include <memory>
#include <unordered_map>

// Container
using VehiclePointer = std::shared_ptr<Vehicle>;
using VehicleContainer = std::unordered_map<std::string, VehiclePointer>;

// Add new vehicle
void addVehicle(VehicleContainer& vehicles, const std::string& id, EngineType type, const std::string& make,
                const std::string& model, int year, int permit_duration);

// Edit existing vehicle
void editVehicle(VehicleContainer& vehicles, const std::string& id, EngineType type, const std::string& make,
                 const std::string& model, int year, int permit_duration);

// Remove vehicle by ID
void removeVehicle(VehicleContainer& vehicles, const std::string& id);

// Search for vehicle by ID
VehiclePointer searchVehicleById(const VehicleContainer& vehicles, const std::string& id);

// Search vehicles by type
std::vector<VehiclePointer> searchVehiclesByType(const VehicleContainer& vehicles, EngineType type);

// Find vehicle with least and most permit duration
std::pair<VehiclePointer, VehiclePointer> findMinMaxPermitDuration(const VehicleContainer& vehicles);

#endif // FUNCTIONALITIES_H
