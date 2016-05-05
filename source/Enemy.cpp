#include "Enemy.h"

Enemy::Enemy(){
	this->x = 0;
	this->y = 0;
	this->alive = false;
	this->maxHealth = 1;
	this->currentHealth = 1;
	this->currentWeapon = 17;
	this->file="";
}

void Enemy::setType(int a){
	if (a == 1){				//Soldier
		this->alive = true;
		this->maxHealth = 10;
		this->currentHealth = 10;
		this->currentWeapon = 17;
		this->file="assets/enemies/normal/normal.png";
	}
	else if (a == 2){			//Ranger
		this->alive = true;
		this->maxHealth = 8;
		this->currentHealth = 8;
		this->currentWeapon = 18;
		this->file="assets/enemies/ranger/ranger.png";
	}
	else if (a == 3){			//Heavy
		this->alive = true;
		this->maxHealth = 20;
		this->currentHealth = 20;
		this->currentWeapon = 19;
		this->file="assets/enemies/heavy/heavy.png";
	}
	else if (a == 4){			//Imp
		this->alive = true;
		this->maxHealth = 5;
		this->currentHealth = 5;
		this->currentWeapon = 20;
		this->file="assets/enemies/imp/imp.png";
	}
	else if (a == 5){			//Mage
		this->alive = true;
		this->maxHealth = 8;
		this->currentHealth = 8;
		this->currentWeapon = 21;
		this->file="assets/enemies/wizard/wizard.png";
	}
	else {
		//you suck
	}
}	

void Enemy::mov(void){
	//Find path to player. go to player. fuck player.
}

void Enemy::attack(void){
	//Attack code does thing
}

void Enemy::takeDamage(int delta){
	int temp = this->currentHealth;
	this->currentHealth = temp - delta;
}

void Enemy::die(){
	this->alive = false;
}
