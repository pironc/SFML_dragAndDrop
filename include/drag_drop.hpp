/*
** EPITECH PROJECT, 2022
** sfml_dragDrop
** File description:
** drag_drop
*/

#ifndef _DRAG_DROP_HPP_
#define _DRAG_DROP_HPP_

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class DragDrop
{
public:
    
};

void draw(DragDrop *dragdrop);

/* SFML Library */

void initRect(sf::RectangleShape *rect, sf::Color color, sf::Vector2f pos,
sf::Vector2f size);

void initText(sf::Text *text, const sf::Color &color, const char *str,
sf::Font &font, sf::Vector2f pos, int size);


#endif /* !_DRAG_DROP_HPP_ */