all: compile run
compile: Musician.cpp main-1-1.cpp
	g++ -std=c++11 -o Driver Musician.cpp main-1-1.cpp
run: Driver
	./Driver