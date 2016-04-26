#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class Game {
	public:
		static void Start();

	private:
		static bool IsExiting();
		static void GameLoop();

		enum GameState {Uninit, Splash, Paused, Menu, Playing, Closing};

		static GameState _gameState;
		static sf::RenderWindow _mainWindow;
};
