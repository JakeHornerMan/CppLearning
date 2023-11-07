#include <SFML/Graphics.hpp>
#include <string>  

int Text()
{
    //Set Window
    sf::RenderWindow window(sf::VideoMode(1280 , 720), "SFML Window");
    window.setFramerateLimit(120);

    sf::Font open_sans;
    open_sans.loadFromFile("C:\\Users\\jakeh\\Documents\\GitHub\\CppLearning\\SFMLProject\\Fonts\\GhostStoriesDeluxe.ttf");

    int my_score =0;
    std::string string = std::to_string(my_score);

    sf::Text my_text;
    my_text.setFont(open_sans);
    my_text.setString(string);
    //my_text.setPosition(window.getSize().x / 2 + my_text.getScale().x/2, window.getSize().y / 2 + my_text.getScale().y);
    my_text.setFillColor(sf::Color::Red);

    //Loop to run window
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();

            if (event.mouseButton.button == sf::Mouse::Right) {
                my_score++;
                string = std::to_string(my_score);
                my_text.setString(string);
            }

        }

        //Render window
        window.clear();
        window.draw(my_text);
        window.display();
    }

    return 0;
}