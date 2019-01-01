#include <SFML/Graphics.hpp>

int main(int argc, char ** argv)
{
	sf::RenderWindow window(sf::VideoMode(640,480), "First window");

	// sf::RectangleShape rectangle(sf::Vector2f(128.0f, 128.0f));
	// rectangle.setFillColor(sf::Color::Red);
	// rectangle.setPosition(320,240);
	// rectangle.setOrigin(rectangle.getSize().x/2, rectangle.getSize().y/2);

	sf::Texture mushroomTexture;
	mushroomTexture.loadFromFile("mushroom.png");
	sf::Sprite mushroom(mushroomTexture);
	mushroom.scale(0.5f,0.5f);
	sf::Vector2u size = mushroomTexture.getSize();
	mushroom.setOrigin(size.x/2, size.y/2);
	sf::Vector2f increment(0.4f, 0.4f);





	while(window.isOpen()) {
		sf::Event event;
		while(window.pollEvent(event)) {
			if(event.type == sf::Event::Closed) {
				window.close();
			}
		}



		if(mushroom.getPosition().x + (size.x/2) > window.getSize().x && increment.x > 0 || (mushroom.getPosition().x - (size.x/2) < 0 && increment.x < 0))
			{
				increment.x = - increment.x;
			}

			if(mushroom.getPosition().y + (size.y/2) > window.getSize().y && increment.y > 0 || (mushroom.getPosition().y - (size.y/2) < 0 && increment.y < 0))
				{
					increment.y = - increment.y;
				}

		window.clear(sf::Color(16,16,16,255));

		mushroom.setPosition(mushroom.getPosition() + increment);

		window.draw(mushroom);
		window.display();
	}
	return 0;
}
