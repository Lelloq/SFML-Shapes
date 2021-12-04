#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

/*! \file Line.h
* \brief The line shape class
*
* Inherits the Shape class.
*/

class Line : public Shape
{
public:
	Line(); //!<Default line constructor, creates the points for a line and makes it white
	/*!
	* \param p sf::Vector2f, takes in two Vector2f values.
	* \param c sf::Color, colour of the line.
	*/
	Line(sf::Vector2f p[2], sf::Color c);//!<Line constructor for specified positions and colour
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//<!Overriding the draw virtual function from the base class
};