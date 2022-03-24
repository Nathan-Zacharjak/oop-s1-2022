all: mycode run
run:
	./mycode
mycode: main-2-2.cpp function-2-2.cpp
	g++ -o mycode main-2-2.cpp function-2-2.cpp