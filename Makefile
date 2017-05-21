all: MyProgram

MyProgram: main.o Piece.o
	g++ main.o Piece.o -o MyProgram

main.o: main.cpp
	g++ -c main.cpp

Piece.o: Piece.cpp
	g++ -c Piece.cpp

clean:
	rm *o MyProgram
