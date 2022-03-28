all: mycode run
run:
	./mycode
mycode: main-4-1.cpp function-4-1.cpp
	g++ -o mycode main-4-1.cpp function-4-1.cpp