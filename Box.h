#pragma once
#include "settings.h"

class BoxObject {
private:

	sf::Sprite sprite;
	sf::Texture texture;
public:
	enum BoxSize { BOX, GRASS, STONE };
	BoxObject(std::string fileName, BoxSize size, sf::Vector2f pos) {
		texture.loadFromFile(fileName);
		sprite.setTexture(texture);
		if (size == BOX) {
			texture.loadFromFile(Box_File_Name);
		}
		else if (size == GRASS) {
			texture.loadFromFile(Grass_File_Name);
		}
		else if (size == STONE) {
			texture.loadFromFile(Stone_File_Name);
		}
		sprite.setPosition(pos);
	}

		void update() {
			sf::Vector2f pos = sprite.getPosition();
		}

		void setposition() {

		}
		sf::Sprite& getSprite() { return sprite; }
		sf::FloatRect getHitBox() { return sprite.getGlobalBounds(); }
		sf::Vector2f getPosition();

};
