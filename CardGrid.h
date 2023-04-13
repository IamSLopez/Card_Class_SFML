//
// Created by firehero1416 on 5/10/2020.
//

#ifndef SFML_PROJECT_CARDGRID_H
#define SFML_PROJECT_CARDGRID_H
#include "PokerCard.h"
#include <SFML/Graphics.hpp>
class CardGrid {
public:
    CardGrid(){
        /*for(int r = 0; r < 4; r++)
        {
            for(int c = 1; c < 14; c++)
            {
                PokerCard pokerCard(r, c, x, y);
                x = x + pokerCard.getSizeX();
                if(c == 13)
                {
                    y = y + pokerCard.getSizeY();
                }
            }
        }*/

    };
    void draw(sf::RenderWindow &window){
        x = 0;
        y = 0;
        for(int r = 0; r < 4; r++)
        {
            //a = r;
            for(int c = 1; c < 14; c++)
            {
                //b = c;
                PokerCard pokerCard(r,c, x, y);
                //pokerCard.setPosition(pokerCard.getPositionX() + pokerCard.getSizeX(), pokerCard.getPositionY());
                pokerCard.draw(window);
                x = x + pokerCard.getSizeX();
                if(c == 13)
                {
                    y = y + pokerCard.getSizeY();
                    x = 0;
                }
            }
        }

    };
private:
int x, y;
//PokerCard pokerCard(int, int, int, int);
};


#endif //SFML_PROJECT_CARDGRID_H
