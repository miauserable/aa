#pragma once

#define GROUND_H

#include <SFML/Graphics.hpp>
#include <iostream>

class ground {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::FloatRect bounds;
	std::vector<sf::Vector2f> positions;
	/*float velocityY = 0;
	float accelerationY = 0;

	float gravity = 2;*/
public:
	ground();
	sf::Sprite getSprite();
	void draw(sf::RenderWindow& w);
	void update();
};
