#include "Game.hpp"

// Private Functions
void Game::initVariables(){
    this->window = nullptr;
    this->videoMode.height = 600;
    this->videoMode.width = 800;
}

void Game::initWindow(){
    this->window = new sf::RenderWindow(this->videoMode,"0x4d-engine");
}

// Constructor and deconstructor
Game::Game(){
    this->initVariables();
    this->initWindow();
}

Game::~Game(){
    delete this->window;
}

//Accessors
const bool Game::running() const{
    return this->window->isOpen();
}

// Functions
void Game::pollEvents(){
    while(this->window->pollEvent(this->ev))
    {
        switch(this->ev.type)
        {
            case sf::Event::Closed:
                this->window->close();
                break;
            case sf::Event::KeyPressed:
                if(this->ev.key.code == sf::Keyboard::Escape)
                    this->window->close();
                break;
        }

    }
}

void Game::update(){
    this->pollEvents();
}

void Game::render(){

    this->window->clear(sf::Color(255,0,0,255));

    // Render game object

    this->window->display();
}

void Game::run(){
    while(this->running()) {
        this->update();
        this->render();
    }
}
