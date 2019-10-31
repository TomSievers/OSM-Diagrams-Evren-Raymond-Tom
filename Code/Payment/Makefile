../dll/Payment.dll : Payment.o Bank.o IDataBaseConnector.o
	g++ -shared -o ../dll/Payment.dll Payment.o Bank.o IDataBaseConnector.o

Bank.o : Bank.cpp
	g++ -c Bank.cpp

Payment.o : Payment.cpp
	g++ -c Payment.cpp 

IDataBaseConnector.o : ../DatabaseConnector/IDataBaseConnector.cpp
	g++ -c ../DatabaseConnector/IDataBaseConnector.cpp