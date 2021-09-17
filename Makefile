moteur: main.o Vecteur3D.o Particule.o
		g++ $^ -o $@

main.o: main.cpp Vecteur3D.h
		g++ -Wall -std=c++11 -c $<

Vecteur3D.o: Vecteur3D.cpp Vecteur3D.h
		g++ -Wall -std=c++11 -c $<

Particule.o: Particule.cpp Particule.h
		g++ -Wall -std=c++11 -c $<

clean:
		rm *.o

cleaner:
		rm *.o moteur

all : moteur clean
