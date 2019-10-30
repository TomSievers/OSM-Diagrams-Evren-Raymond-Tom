all: ../dll/CarLib.dll ../dll/PoleLib.dll ../dll/AdminLib.dll ../dll/ClientLib.dll

../dll/CarLib.dll : CarSession.o Session.o IDataBaseConnector.o
	g++ -shared -o ../dll/CarLib.dll CarSession.o Session.o IDataBaseConnector.o

../dll/PoleLib.dll : PoleSession.o Session.o IDataBaseConnector.o
	g++ -shared -o ../dll/PoleLib.dll PoleSession.o Session.o IDataBaseConnector.o -L ../Payment -lPayment

../dll/AdminLib.dll : UserSession.o Session.o IDataBaseConnector.o
	g++ -shared -o ../dll/AdminLib.dll UserSession.o Session.o IDataBaseConnector.o 

../dll/ClientLib.dll : UserSession.o Session.o IDataBaseConnector.o
	g++ -shared -o ../dll/ClientLib.dll UserSession.o Session.o IDataBaseConnector.o 

IDataBaseConnector.o : IDataBaseConnector.cpp
	g++ -c IDataBaseConnector.cpp

Session.o : Session.cpp
	g++ -c Session.cpp

CarSession.o : CarSession.cpp
	g++ -c CarSession.cpp

PoleSession.o : PoleSession.cpp
	g++ -c PoleSession.cpp

UserSession.o : UserSession.cpp
	g++ -c UserSession.cpp 

