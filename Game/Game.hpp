#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

class Game {

private:
  // Private Functions
  void initWindow();
  void initVariables();

  // Private Variables
  sf::RenderWindow* window;
  sf::Event ev;
  sf::VideoMode videoMode;
  
public:
  // Constructor and deconstructor
  Game();
  virtual ~Game();

  //Accessors
  const bool running() const;

  // Functions
  void pollEvents();
  void update();
  void render();
  
  
};

#endif
