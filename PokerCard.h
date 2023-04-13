//
// Created by firehero1416 on 5/9/2020.
//

#ifndef SFML_PROJECT_POKERCARD_H
#define SFML_PROJECT_POKERCARD_H

#include <SFML/Graphics.hpp>


class PokerCard {
public:
    PokerCard();
    PokerCard (int a, int b, int c, int d){
        pokercard.setPosition(c, d);
        pokercard.setSize(sf::Vector2f(375, 500));
        pokercard.setScale(.35,.35);
        pokercard.setOutlineColor(sf::Color::Black);
        pokercard.setOutlineThickness(5);


        font.loadFromFile("C:/Users/firehero1416/CLionProjects/sfml_project - Card Class/Release/Fonts/ariblk.ttf");
        sf::Text text;
        if(b == 1){
            sf::Text text1("A", font);
            text = text1;
        }
        else if(b == 2){
            sf::Text text1("2", font);
            text = text1;
        }
        else if(b == 3){
            sf::Text text1("3", font);
            text = text1;
        }
        else if(b == 4){
            sf::Text text1("4", font);
            text = text1;
        }
        else if(b == 5){
            sf::Text text1("5", font);
            text = text1;
        }
        else if(b == 6){
            sf::Text text1("6", font);
            text = text1;
        }
        else if(b == 7){
            sf::Text text1("7", font);
            text = text1;
        }
        else if(b == 8){
            sf::Text text1("8", font);
            text = text1;
        }
        else if(b == 9){
            sf::Text text1("9", font);
            text = text1;
        }
        else if(b == 10){
            sf::Text text1("10", font);
            text = text1;
        }
        else if(b == 11){
            sf::Text text1("J", font);
            text = text1;
        }
        else if(b == 12){
            sf::Text text1("Q", font);
            text = text1;
        }
        else{
            sf::Text text1("K", font);
            text = text1;
        }
        if(a == 0|| a ==2){
            sf::Text text1;
            text1.setStyle(sf::Text::Regular);
            text1.setFillColor(sf::Color::Red);
            text.setFillColor(text1.getFillColor());
        }
        else{
            sf::Text text1;
            text1.setStyle(sf::Text::Regular);
            text1.setFillColor(sf::Color::Black);
            text.setFillColor(text1.getFillColor());
        }
        text.setCharacterSize(90);
        text.setPosition(pokercard.getPosition().x + ((pokercard.getSize().x * 1/2 ) -  text.getCharacterSize() * 1/2)* pokercard.getScale().x, pokercard.getPosition().y + ((pokercard.getSize().y * 1/2)-  text.getCharacterSize()*1/2)*pokercard.getScale().y);
        text.setStyle(sf::Text::Regular);
        //text.setFillColor(sf::Color::Red);
        text.setScale(pokercard.getScale().x,pokercard.getScale().y);
        cardText = text;

        if(a == 0){
            texture.loadFromFile("C:/Users/firehero1416/CLionProjects/sfml_project - Card Class/Release/Sprites/redheart.png");
        }
        else if(a == 1){
            texture.loadFromFile("C:/Users/firehero1416/CLionProjects/sfml_project - Card Class/Release/Sprites/blackclub.png");
        }
        else if(a == 2){
            texture.loadFromFile("C:/Users/firehero1416/CLionProjects/sfml_project - Card Class/Release/Sprites/reddiamond.png");
        }
        else{
            texture.loadFromFile("C:/Users/firehero1416/CLionProjects/sfml_project - Card Class/Release/Sprites/blackspade.png");
        }
        sprite.setTexture(texture);
        sprite.setPosition(pokercard.getPosition().x , pokercard.getPosition().y);
        sprite.setScale(.0625 * pokercard.getScale().x,.0625*pokercard.getScale().y);


        sprite2.setTexture(texture);
        sprite2.setScale(.0625* pokercard.getScale().x,-.0625*pokercard.getScale().y);
        sprite2.setPosition(pokercard.getPosition().x + (pokercard.getSize().x*pokercard.getScale().x - texture.getSize().x*sprite2.getScale().x), pokercard.getPosition().y + pokercard.getSize().y*pokercard.getScale().y);
    }
    void setPosition(int x, int y){
        pokercard.setPosition(x, y);
    }
    int getPositionX(){
        return pokercard.getPosition().x;
    }
    int getPositionY(){
        return pokercard.getPosition().y;
    }
    int getSizeX(){
        return (pokercard.getSize().x * pokercard.getScale().x);
    }
    int getSizeY(){
        return (pokercard.getSize().y * pokercard.getScale().y);
    }

    void draw(sf::RenderWindow &window){
        window.draw(pokercard);
        window.draw(cardText);
        window.draw(sprite);
        window.draw(sprite2);
        prevX = prevX + pokercard.getSize().x*pokercard.getScale().x;
        setPosition(prevX, 0);
    }

private:
    sf:: RectangleShape pokercard;
    sf:: Texture texture;
    sf:: Font font;
    sf:: Text cardText;
    sf:: Sprite sprite;
    sf:: Sprite sprite2;
    int prevX = 0, prevY = 0;
};


#endif //SFML_PROJECT_POKERCARD_H
