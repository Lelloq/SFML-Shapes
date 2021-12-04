#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

/*! \file Triangle.h
* \brief The triangle shape class
*
* Inherits the Shape class.
*/

class Triangle : public Shape
{
public:
	Triangle();//!<Default triangle constructor, creates the vertices for a triangle and makes it white
	/*!
	* \param p sf::Vector2f, takes in three Vector2f values.
	* \param c sf::Color, colour of the shape.
	*/
	Triangle(sf::Vector2f p[3], sf::Color c);//!<Triangle constructor for specified positions and colour
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//<!Overriding the draw virtual function from the base class
};