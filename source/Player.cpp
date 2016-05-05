#include "Player.h"
#include <iostream>

Player::Player(void){
	this->x = 0;
	this->y = 0;
	this->alive = true;
	this->maxHealth = 10;
	this->currentHealth = 10;
	this->currentWeapon = 0;
	if (!(this->tex.loadFromFile("assets/player/mc.png", sf::IntRect(-200, -200, 136, 144))))
		std::cerr << "Shit broke fam";
	sprite.setTexture(tex);
}

void Player::mov_UP(void){
	if (this->alive) this->y++;
	sprite.move(sf::Vector2f(0,1));
}

void Player::mov_DOWN(void){
	if (this->alive) this->y--;
	sprite.move(sf::Vector2f(0,-1));
}

void Player::mov_LEFT(void){
	if (this->alive) this->x--;
	sprite.move(sf::Vector2f(1,0));
}

void Player::mov_RIGHT(void){
	if (this->alive) this->x++;
	sprite.move(sf::Vector2f(-1,0));
}

void Player::attack(void){
	//Attack code does thing
}

void Player::takeDamage(int delta){
	int temp = this->currentHealth;
	this->currentHealth = temp - delta;
	if (this->currentHealth <= 0)
		this->die();
}

void Player::healDamage(int delta){
	int temp = this->currentHealth;
	this->currentHealth = temp + this->currentHealth;
	if (this->currentHealth > this->maxHealth)
		this->currentHealth = this->maxHealth;
}

void Player::die(void){
	this->alive = false;
}
