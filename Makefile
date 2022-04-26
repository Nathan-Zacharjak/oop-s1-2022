all: compile run
compile: Musician.cpp Orchestra.cpp main-2-1.cpp
	g++ -std=c++11 -o Driver Musician.cpp Orchestra.cpp main-2-1.cpp
run: Driver
	./Driver