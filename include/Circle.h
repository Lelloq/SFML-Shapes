#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

/*! \file Circle.h
* \brief The circle shape class
*
* Inherits the Shape class.
*/

class Circle : public Shape
{
protected:
	/*! \var double PI;
	* \brief a constant that holds the value of PI.
	*/
	const double PI = 3.14159265359f;
public:
	Circle();//<!Default circle constructor, creates the points for a circle and makes it white
	/*!
	* \param p sf::Vector2f, location of the centre of the circle.
	* \param c sf::Color, colour of the shape.
	* \param PointCount An integer, how many points will make up the circumference of the circle.
	* \param Radius Floating point, how big the circle is.
	*/
	Circle(sf::Vector2f CentrePos, sf::Color c, int PointCount, float Radius);//<!Circle constructor for specified centre position, colour, pointcount and radius
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//<!Overriding the draw virtual function from the base class
};