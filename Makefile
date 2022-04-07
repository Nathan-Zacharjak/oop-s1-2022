all: compile run
compile: person.h person.cpp main-1-2.cpp
	g++ -std=c++11 -o Driver person.cpp main-1-2.cpp
run: Driver
	./Driver