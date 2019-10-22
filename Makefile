all:
	g++ -o game main.cpp Game/Game.cpp -lsfml-graphics -lsfml-window -lsfml-system -O3
clean:
	rm game
