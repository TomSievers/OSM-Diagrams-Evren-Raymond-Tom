CarModule.exe : main.o CarModule.o
	g++ -o CarModule.exe main.o CarModule.o -L../dll/ -lCloseCommunication -lCarLib -lPositional

main.o : main.cpp
	g++ -c main.cpp

CarModule.o : CarModule.cpp
	g++ -c CarModule.cpp