all: compile run
compile: book.h library.h book.cpp library.cpp main.cpp
	g++ -std=c++11 -o LibraryDriver Book.cpp Library.cpp main.cpp
run: LibraryDriver
	./LibraryDriver