#pragma once
#include <SFML/Graphics.hpp>
class Platform
{
	
	sf::Texture texture;
	sf::Sprite sprite;
public:
	Platform() {
		for (int i = 0; i < 9; i++) {
			int x, y;
			x = 1 + rand() % 400;
			y = 1 + rand() % 400;
		this->texture.loadFromFile("platform.png");
		this->sprite.setTexture(texture);
		sprite.setPosition(0, 0);
		sprite.move(x, y);
		}
	};

	sf::Sprite getSprite() {
		return sprite;
	}

	~Platform() {}

};


