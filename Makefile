all: compile run
compile: Musician.cpp Orchestra.cpp main-1-2.cpp
	g++ -std=c++11 -o Driver Musician.cpp Orchestra.cpp main-1-2.cpp
run: Driver
	./Driver