all: mycode run
run:
	./mycode
mycode: main-1-3.cpp function-1-3.cpp
	g++ -o mycode main-1-3.cpp function-1-3.cpp