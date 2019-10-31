ClientApp.exe : main.o ClientApp.o Application.o
	g++ -o ClientApp.exe main.o ClientApp.o Application.o -L../dll/ -lClientLib

main.o : main.cpp
	g++ -c main.cpp

ClientApp.o : ClientApp.cpp
	g++ -c ClientApp.cpp

Application.o : ../Application.cpp
	g++ -c ../Application.cpp