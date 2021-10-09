#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Hero_dumb
{
	int x = 250, y = 0;
	sf::Texture texture;
	sf::Sprite sprite;

public:

	Hero_dumb()
	{
		this->texture.loadFromFile("doodle.png");
		this->sprite.setTexture(texture);
		sprite.setPosition(0, 700);
		sprite.move(x, y);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) x += 3;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) x += -3;
	}

	sf::Sprite getSprite() {
		return this->sprite;
	}

	void moveRight() {
		this->x++;
		this->y++;
	}

	void moveLeft() {
		this->x--;
		this->y++;
	}

	void Jump() {
		this->y;
	}
};

