#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Player.h"
#include "Tile.h"
#include "Enemy.h"

class Game {
	public:
		static void Start();

	private:
		static bool IsExiting();
		static void GameLoop();
		static void drawMap(Tile a);

		enum GameState {Uninit, Splash, Paused, Menu, Playing, Closing};

		Player player1;
		Enemy enemies[10];
		Tile map[65][35];

		static GameState _gameState;
		static sf::RenderWindow _mainWindow;
};
