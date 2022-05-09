all: compile run
compile: main-1-1.cpp Invoice.cpp
	g++ -o Driver main-1-1.cpp Invoice.cpp
run: Driver
	./Driver