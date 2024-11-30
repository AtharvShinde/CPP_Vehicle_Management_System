CXX = g++
CXXFLAGS = -std=c++17 -Wall
SRC = EngineType.h Functionalities.cpp PermitDuration.cpp Vehicle.cpp Main.cpp
OUT = vehicle_management_system

# Default target: Build the executable
all: $(OUT)

# Rule to build the executable from the source files
$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(OUT) $(SRC)

# Clean target: Remove the compiled executable
clean:
	rm -f $(OUT)
