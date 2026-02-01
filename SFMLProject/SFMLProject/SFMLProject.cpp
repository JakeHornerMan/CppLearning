#include <SFML/Graphics.hpp>

int ScreenBounce();
int Text();

int main()
{
    //ScreenBounce();
    /*Text();*/

	//init window
	sf::RenderWindow window(sf::VideoMode(1280, 720), "Game 1", sf::Style::Titlebar | sf::Style::Close);

	//event
	sf::Event ev;

	//Game loop
	while (window.isOpen())
	{
		//Event polling
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (ev.key.code == sf::Keyboard::Escape)
					window.close();
				break;
			}
		}

		//Update


		//Render
		window.clear();
		window.display();
	}

	return 0;
}
