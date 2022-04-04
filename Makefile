all: compile run
compile: Book.h Library.h Book.cpp Library.cpp Main.cpp
	g++ -std=c++11 -o LibraryDriver Book.cpp Library.cpp Main.cpp
run: LibraryDriver
	./LibraryDriver