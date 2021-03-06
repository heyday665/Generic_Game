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

void Game::loadMap(string a){
	for(int i=0; i<50; i++){
		for(int j=0; j<25; j++){
			//
		}
	}
}

void Game::drawMap(Tile a) {
	//
}

void Game::GameLoop() {
	sf::Event currentEvent;
	_mainWindow.clear(sf::Color(0,0,0));
	_mainWindow.setVerticalSyncEnabled(true);

	Player player1;
	Enemy enemies[10];
	char cmap[50][25];
	Tile tmap[50][25];

	while (_mainWindow.pollEvent(currentEvent)){
		switch(_gameState) {
			case Game::Playing:
				{
					if (currentEvent.type == sf::Event::KeyPressed){
						if (currentEvent.key.code == sf::Keyboard::Left)
							//_mainWindow.clear(sf::Color(255,0,0));
							player1.sprite.scale(sf::Vector2f(0.5f, 0.5f));
						if (currentEvent.key.code == sf::Keyboard::Right)
							//_mainWindow.clear(sf::Color(0,255,0));
							player1.sprite.scale(sf::Vector2f(2.f, 2.f));
						if (currentEvent.key.code == sf::Keyboard::A){
							player1.mov_LEFT();
						}
						if (currentEvent.key.code == sf::Keyboard::D){
							player1.mov_RIGHT();
						}
						if (currentEvent.key.code == sf::Keyboard::W){
							player1.mov_UP();
						}
						if (currentEvent.key.code == sf::Keyboard::S){
							player1.mov_DOWN();
						}
					}
					_mainWindow.draw(player1.sprite);
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
