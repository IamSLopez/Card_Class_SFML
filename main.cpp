#include <iostream>
#include <SFML/Graphics.hpp>
#include "PokerCard.h"
#include "CardGrid.h"


int main() {
    sf::RenderWindow window(sf::VideoMode(1920 , 1080, 32), "Poker Card");
    window.setFramerateLimit(60);


    //PokerCard pokerCard;
    CardGrid cardGrid;
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                window.close();
            }
        }
        cardGrid.draw(window);
        //window.draw(text);
        //window.draw(sprite);
        //window.draw(sprite2);
        window.display();
    }
    return 0;
}