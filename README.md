# Vehicle Management System

This project implements a **Vehicle Management System** designed to manage a fleet of vehicles using modern C++ concepts and Object-Oriented Programming (OOP). The system allows the addition, editing, and removal of vehicles, as well as various other functionalities such as searching for vehicles by ID or type, and finding vehicles based on permit duration.

## Features

- **Add a Vehicle**: Users can add a new vehicle to the system with detailed information such as vehicle ID, engine type, make, model, year of manufacture, and permit duration.
  
- **Edit a Vehicle**: Modify the details of an existing vehicle in the system.

- **Remove a Vehicle**: Vehicles can be removed from the system using their unique vehicle ID.

- **Search Vehicles**:
  - By **ID**: Search for a vehicle by its unique identifier.
  - By **Type**: Search for vehicles by their engine type (e.g., Electric, Hybrid, Fuel-based).
  
- **Find Vehicle with Least and Most Permit Duration**: The system can find the vehicle with the least permit duration and the vehicle with the most permit duration (between 0 to 5 years).

## System Architecture

The system is structured using several key components:

1. **Vehicle Class**: Represents a vehicle with its attributes, including engine type, make, model, and permit duration.
   
2. **EngineType Enum**: An enumeration to define the types of engines (Electric, Hybrid, Fuel-based).
   
3. **Functionalities Module**: A collection of functions that allow for adding, editing, removing, searching, and finding vehicles based on different criteria. The following functions are defined in the `Functionalities.h` header file:
   - `addVehicle()`: Adds a new vehicle to the system.
   - `editVehicle()`: Edits the details of an existing vehicle.
   - `removeVehicle()`: Removes a vehicle based on its ID.
   - `searchVehicleById()`: Searches for a vehicle by its ID.
   - `searchVehiclesByType()`: Searches for vehicles based on their engine type.
   - `findMinMaxPermitDuration()`: Finds the vehicle with the least and most permit duration.

## Modern C++ Concepts Used

This project leverages various **modern C++** concepts to ensure efficient and maintainable code:

- **Smart Pointers**: `std::shared_ptr` is used for managing vehicle objects in a memory-safe manner, ensuring that objects are properly cleaned up when they are no longer in use.
  
- **Containers**: The project uses `std::unordered_map` for fast lookups when managing vehicles by their IDs, and `std::vector` for storing lists of vehicles based on their type.
  
- **Enum Classes**: `EngineType` is defined as an `enum class` to encapsulate engine types and provide type safety. This makes the code easier to maintain and read.
  
- **Object-Oriented Design**: The system uses OOP principles such as encapsulation and abstraction, organizing the code into classes and functions for easier extension and maintenance.

- **Standard Library Algorithms**: Functions such as `std::min_element` and `std::max_element` are used to find vehicles with the least and most permit durations.

## Files and Structure

The project is organized into the following files:

- `EngineType.h`: Defines the `EngineType` enum class for different vehicle engine types (e.g., Electric, Hybrid, Fuel-based).
- `Vehicle.h` and `Vehicle.cpp`: Defines the `Vehicle` class, including its attributes and methods for getting/setting data.
- `Functionalities.h` and `Functionalities.cpp`: Contains all functions for managing vehicles (add, edit, remove, search, find).
- `Main.cpp`: The main entry point of the application, where the vehicle management system runs and interacts with users.

## Run The Code

To run this project

```bash
  make
```
or

```bash
  g++ -std=c++17 -o vehicle_management_app EngineType.h Functionalities.h PermitDuration.cpp Vehicle.cpp Functionalities.cpp Main.cpp
```

