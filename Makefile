all: mycode run
run:
	./mycode
mycode: main-1-4.cpp function-1-4.cpp
	g++ -o mycode main-1-4.cpp function-1-4.cpp