#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

/*! \file Square.h
* \brief The square shape class
*
* Inherits the Shape class.
*/

class Square : public Shape
{
public:
	Square();//<!Default square constructor, creates the vertices for a square and makes it white
	/*!
	* \param p sf::Vector2f, centre point of the square.
	* \param c sf::Color, colour of the shape.
	* \param size Floating point, how big the square will be.
	*/
	Square(sf::Vector2f Origin, sf::Color c, float size);//<!Square constructor for specified centre position and size
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//<!Overriding the draw virtual function from the base class
};