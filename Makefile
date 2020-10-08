prog: vector.o main.o fraction.o Makefile
	g++ -o prog fraction.o vector.o main.o
vector.o: vector.cpp vector.h  Makefile
	g++ -c vector.cpp
fraction.o: fraction.cpp fraction.h Makefile
	g++ -c fraction.cpp
main.o: main.cpp vector.h fraction.h Makefile
	g++ -c main.cpp
clean:
	rm prog vector.o fraction.o main.o