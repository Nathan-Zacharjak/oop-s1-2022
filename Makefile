all: mycode run
run:
	./mycode
mycode: main-1-1.cpp function-1-1.cpp
	g++ -o mycode main-1-1.cpp function-1-1.cpp