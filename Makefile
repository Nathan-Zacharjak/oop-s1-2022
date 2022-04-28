all: compile run
compile: Truck.cpp Truck_yard.cpp main-1-2.cpp
	g++ -o Driver Truck.cpp Truck_yard.cpp main-1-2.cpp
run: Driver
	./Driver