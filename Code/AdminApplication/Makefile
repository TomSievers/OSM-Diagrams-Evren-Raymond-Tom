AdminApp.exe : main.o AdminApp.o Application.o 
	g++ -o AdminApp.exe main.o AdminApp.o Application.o  -L../dll/ -lAdminLib

main.o : main.cpp
	g++ -c main.cpp

AdminApp.o : AdminApp.cpp
	g++ -c AdminApp.cpp

Application.o : ../Application.cpp
	g++ -c ../Application.cpp