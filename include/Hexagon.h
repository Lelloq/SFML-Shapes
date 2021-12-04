#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

/*! \file Hexagon.h
* \brief The hexagon shape class
*
* Inherits the Shape class.
*/

class Hexagon : public Shape
{
public:
	Hexagon();//<!Default hexagon constructor, creates the vertices for a hexagon and makes it white
	/*!
	* \param p sf::Vector2f, takes in 7 Vector2f values [0] being the centre point.
	* \param c sf::Color, colour of the shape.
	*/
	Hexagon(sf::Vector2f p[7], sf::Color c);//<!Hexagon constructor for specified positions and colour
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//<!Overriding the draw virtual function from the base class
};