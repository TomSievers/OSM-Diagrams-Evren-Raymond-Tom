Pole.exe : main.o Pole.o
	g++ -o Pole.exe main.o Pole.o -L../dll/ -lCloseCommunication -lPoleLib

main.o : main.cpp
	g++ -c main.cpp

Pole.o : Pole.cpp
	g++ -c Pole.cpp