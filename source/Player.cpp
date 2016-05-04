#include "Player.h"

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
	if (this->currentHealth <= 0)
		this->die();
}

void Player::healDamage(int delta){
	int temp = this->currentHealth;
	this->currenthealth = temp + this->currentHealth;
	if (this->currentHealth > this->maxHealth)
		this->currentHealth = this->maxHealth;
}

void Player::die(void){
	this->alive = false;
}
