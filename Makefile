all: compile run
compile: Truck.cpp main-1-1.cpp
	g++ -o Driver Truck.cpp main-1-1.cpp
run: Driver
	./Driver