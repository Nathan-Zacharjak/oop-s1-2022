all: compile run
compile: person.cpp aircraft.cpp main-2-2.cpp
	g++ -std=c++11 -o Driver person.cpp aircraft.cpp main-2-2.cpp
run: Driver
	./Driver