/*
** EPITECH PROJECT, 2022
** B-PDG-300-BAR-3-1-PDGRUSH3-shaun.orssaud
** File description:
** __sfml_lib__
*/

#include "drag_drop.hpp"

void initRect(sf::RectangleShape *rect, sf::Color color,
sf::Vector2f pos, sf::Vector2f size)
{
    rect->setFillColor(color);
    rect->setPosition(pos);
    rect->setSize(size);
}

void initText(sf::Text *text, const sf::Color &color, const char *str,
sf::Font &font, sf::Vector2f pos, int size)
{
    text->setFillColor(color);
    text->setString(str);
    text->setFont(font);
    text->setPosition(pos);
    text->setCharacterSize(size);
}