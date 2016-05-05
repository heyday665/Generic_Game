#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class Player {
	public:
		void mov_UP();
		void mov_DOWN();
		void mov_LEFT();
		void mov_RIGHT();
		void attack();
		void takeDamage(int delta);
		void healDamage(int delta);
		int getHealth();
		int getMaxHealth();
		sf::Sprite sprite;
		Player();

	private:
		int x, y;
		bool alive;
		int currentHealth;
		int maxHealth;
		void die();
		int currentWeapon;
			//Weapons start at 0 and go to 16
		int currentArmor;
		sf::Texture tex;
};
/*
Player::Player(void){
	this->x = 0;
	this->y = 0;
	this->alive = true;
	this->maxHealth = 10;
	this->currentHealth = 10;
	this->currentWeapon = 0;
}

void Player::mov_UP(void){
	if (this->alive) this->y++;
}

void Player::mov_DOWN(void){
	if (this->alive) this->y--;
}

void Player::mov_LEFT(void){
	if (this->alive) this->x--;
}

void Player::mov_RIGHT(void){
	if (this->alive) this->x++;
}

void Player::attack(void){
	//Attack code does thing
}

void Player::takeDamage(int delta){
	int temp = this->currentHealth;
	this->currentHealth = temp - delta;
}

void Player::healDamage(int delta){
	int temp = this->currentHealth;
	this->currentHealth = temp + delta;
}

void Player::die(){
	this->alive = false;
}
MOVED TO PLAYER.CPP */
