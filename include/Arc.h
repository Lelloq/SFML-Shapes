#pragma once
#include "SFML/Graphics.hpp"
#include "Shape.h"

/*! \file Arc.h
* \brief The arc shape class
*
* Inherits the Shape class.
*/

class Arc : public Shape
{
protected:
	/*! \var double PI;
	* \brief a constant that holds the value of PI.
	*/
	const double PI = 3.14159265359f;
public:
	Arc();//<!Default arc constructor, creates vertices to create the shape of an arc and makes it white.
	/*!
	* \param p sf::Vector2f, location of the centre of the arc.
	* \param c sf::Color, colour of the arc.
	* \param PointCount An integer, how many points will make up the curve of the arc.
	* \param arcSize An integer, how big the arc will be.
	* \param RadiusX Floating point, the radius of the arc in the x axis.
	* \param RadiusY Floating point, the radius of hte arc in the y axis.
	*/
	Arc(sf::Vector2f p, sf::Color c, int PointCount,int arcSize, float RadiusX, float RadiusY);//<!Arc constructor for specified start position, the arc size, pointcount and radius for x and y axis and the colour
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;//<!Overriding the draw virtual function from the base class
};