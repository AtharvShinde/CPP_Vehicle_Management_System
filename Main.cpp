#include <iostream>
#include "Functionalities.h"

int main()
{
    VehicleContainer vehicles;

    // Add vehicles
    addVehicle(vehicles, "V001", EngineType::EV, "Tesla", "Model S", 2020, 5);
    addVehicle(vehicles, "V002", EngineType::Hybrid, "Toyota", "Prius", 2019, 3);
    addVehicle(vehicles, "V003", EngineType::Fuel, "Ford", "F150", 2021, 2);
    addVehicle(vehicles, "V004", EngineType::Fuel, "Chevy", "Cruze", 2020, 1);
    addVehicle(vehicles, "V005", EngineType::EV, "Nissan", "Leaf", 2018, 4);
    addVehicle(vehicles, "V006", EngineType::Hybrid, "Honda", "Insight", 2022, 5);
    addVehicle(vehicles, "V007", EngineType::Fuel, "BMW", "X5", 2020, 2);
    addVehicle(vehicles, "V008", EngineType::EV, "Audi", "e-tron", 2021, 3);
    addVehicle(vehicles, "V009", EngineType::Hybrid, "Ford", "Escape", 2021, 4);
    addVehicle(vehicles, "V010", EngineType::Fuel, "Toyota", "Corolla", 2019, 0);

    // Display all vehicles
    std::cout << "All Vehicles:\n";
    for (const auto& vehicle : vehicles)
    {
        vehicle.second->displayDetails();
        std::cout << "----------------------\n";
    }

    // Search vehicle by ID
    std::string search_id = "V003";
    auto vehicle = searchVehicleById(vehicles, search_id);
    if (vehicle)
    {
        std::cout << "Found Vehicle with ID " << search_id << ":\n";
        vehicle->displayDetails();
    }
    else
    {
        std::cout << "Vehicle with ID " << search_id << " not found.\n";
    }

    // Edit existing vehicle
    std::cout << "\nEditing Vehicle V002...\n";
    editVehicle(vehicles, "V002", EngineType::EV, "Toyota", "Prius Plus", 2022, 4);
    auto edited_vehicle = searchVehicleById(vehicles, "V002");
    if (edited_vehicle)
    {
        std::cout << "Updated Vehicle V002 details:\n";
        edited_vehicle->displayDetails();
    }

    // Remove a vehicle
    std::cout << "\nRemoving Vehicle V010...\n";
    removeVehicle(vehicles, "V010");
    auto removed_vehicle = searchVehicleById(vehicles, "V010");
    if (removed_vehicle)
    {
        std::cout << "Vehicle V010 still exists in the system.\n";
    }
    else
    {
        std::cout << "Vehicle V010 has been removed from the system.\n";
    }

    // Find and display vehicle with the least and most permit duration
    auto [min_vehicle, max_vehicle] = findMinMaxPermitDuration(vehicles);
    std::cout << "\nVehicle with the minimum permit duration:\n";
    if (min_vehicle) min_vehicle->displayDetails();
    std::cout << "\nVehicle with the maximum permit duration:\n";
    if (max_vehicle) max_vehicle->displayDetails();

    return 0;
}
