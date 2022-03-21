# TEST MAKEFILE

mycode: main.cpp sum.o 
        g++ -o mycode main.cpp sum.o 

sum.o: sum.cpp 
        g++ -c sum.cpp

test:
        ./mycode < code1.txt