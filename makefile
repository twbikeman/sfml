all: mushroom

mushroom: 
	g++ mushroom.cpp game.o window.o -o mushroom  -I/usr/include -L/usr/lib/x86_64-linux-gnu  -lsfml-window -lsfml-graphics -lsfml-system
