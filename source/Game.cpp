#include "Game.h"

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

void Game::GameLoop() {
	sf::Event currentEvent;
	while (_mainWindow.pollEvent(currentEvent)){
		switch(_gameState) {
			case Game::Playing:
				{
					_mainWindow.clear(sf::Color(255,0,0));
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
