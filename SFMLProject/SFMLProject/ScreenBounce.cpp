#include <SFML/Graphics.hpp>

int ScreenBounce() 
{
    //Set Window
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML Window");
    window.setFramerateLimit(120);

    //Set Shape
    sf::RectangleShape rect;
    sf::Vector2f position(640, 360);
    rect.setPosition(position);
    rect.setSize(sf::Vector2f(75, 75));

    int xVelocity = 1;
    int yVelocity = 1;

    //Loop to run window
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
                xVelocity += 1;
                yVelocity += 1;
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift)) {
                xVelocity -= 1;
                yVelocity -= 1;
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                xVelocity -= 1;
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                xVelocity += 1;
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                yVelocity += 1;
            }
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                yVelocity -= 1;
            }
            
        }

        //Screen Bounds
        if (position.x < (0) || position.x >(1280 - rect.getSize().x)) xVelocity *= -1;
        if (position.y < 0 || position.y >(720 - rect.getSize().y)) yVelocity *= -1;

        //Movement
        position.x += xVelocity;
        position.y += yVelocity;
        rect.setPosition(position);

        //Render window
        window.clear();
        window.draw(rect);
        window.display();
    }

    return 0;
}