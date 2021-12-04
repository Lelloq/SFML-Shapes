#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

/*! \file Octagon.h
* \brief The octagon shape class
*
* Inherits the Shape class.
*/

class Octagon : public Shape
{
public:
	Octagon();//<!Default octagon constructor, creates the vertices for an octagon and makes it white
	/*!
	* \param p sf::Vector2f takes in 9 Vector2f values [0] being the centre point.
	* \param c sf::Color, colour of the shape.
	*/
	Octagon(sf::Vector2f p[9], sf::Color c);//<!Octagon constructor for specified positions and colour
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//<!Overriding the draw virtual function from the base class
};