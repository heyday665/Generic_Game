#include "Game.h"
#include "Player.h"
#include "Enemy.h"
#include "Tile.h"

void Game::Start() {
	if(_gameState != Uninit)
		return;

	_mainWindow.create(sf::VideoMode(1280,720,32),"Generic");
	_gameState = Game::Playing;

	while(!IsExiting()) {
		GameLoop();
	}

	_mainWindow.close();
}

bool Game::IsExiting() {
	if(_gameState == Game::Closing)
		return true;
	else
		return false;
}

void Game::drawMap(Tile a) {
	//
}

void Game::GameLoop() {
	sf::Event currentEvent;
	_mainWindow.clear(sf::Color(0,0,0));
	while (_mainWindow.pollEvent(currentEvent)){
		switch(_gameState) {
			case Game::Playing:
				{
					if (currentEvent.type == sf::Event::KeyPressed){
						if (currentEvent.key.code == sf::Keyboard::Left)
							_mainWindow.clear(sf::Color(255,0,0));
						if (currentEvent.key.code == sf::Keyboard::Right)
							_mainWindow.clear(sf::Color(0,255,0));
						if (currentEvent.key.code == sf::Keyboard::Down)
							_mainWindow.clear(sf::Color(0,0,255));
					}
					_mainWindow.display();

					if (currentEvent.type == sf::Event::Closed) {
						_gameState = Game::Closing;
					}
					break;
				}
		}
	}
}

Game::GameState Game::_gameState = Uninit;
sf::RenderWindow Game::_mainWindow;
