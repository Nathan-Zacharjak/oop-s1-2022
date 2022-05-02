all: compile run
compile: Player.cpp main-3-1.cpp
	g++ -o Driver Player.cpp main-3-1.cpp
run: Driver
	./Driver