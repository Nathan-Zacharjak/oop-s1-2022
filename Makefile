all: mycode run
run:
	./mycode
mycode: main-2-1.cpp function-2-1.cpp
	g++ -o mycode main-2-1.cpp function-2-1.cpp