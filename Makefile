all: compile run
compile: meerkat.h meerkat.cpp cart.h cart.cpp main-2-1.cpp
	g++ -std=c++11 -o Driver meerkat.cpp cart.cpp main-2-1.cpp
run: Driver
	./Driver