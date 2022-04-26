all: compile run
compile: musician.cpp main-1-1.cpp
	g++ -std=c++11 -o Driver musician.cpp main-1-1.cpp
run: Driver
	./Driver