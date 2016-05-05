#pragma once
#include <string>
using namespace std;

class Enemy {
	public:
		
		void setType(int a);
		void mov();
		void attack();
		void takeDamage(int delta);
		int getHealth();
		int getMaxHealth();
		//string 
		Enemy();

	private:
		int x, y;
		bool alive;
		string file;
		int currentHealth;
		int maxHealth;
		void die();
		int currentWeapon;
			//Weapons start at 0 and go to 16
			//AI Weapons go from 17 to 21
		int currentArmor;
};

/*Enemy::Enemy(string type, string ifile){
	this->x = 0;
	this->y = 0;
	if (type == "soldier"){
		this->alive = true;
		this->maxHealth = 10;
		this->currentHealth = 10;
		this->currentWeapon = 17;
	}
	else if (type == "ranger"){
		this->alive = true;
		this->maxHealth = 8;
		this->currentHealth = 8;
		this->currentWeapon = 18;
	}
	else if (type == "heavy"){
		this->alive = true;
		this->maxHealth = 20;
		this->currentHealth = 20;
		this->currentWeapon = 19;
	}
	else if (type == "imp"){
		this->alive = true;
		this->maxHealth = 5;
		this->currentHealth = 5;
		this->currentWeapon = 20;
	}
	else if (type == "mage"){
		this->alive = true;
		this->maxHealth = 8;
		this->currentHealth = 8;
		this->currentWeapon = 21;
	}
	else {
		//you suck
	}
	this->file = ifile;
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
MOVED TO ENEMY.CPP */
