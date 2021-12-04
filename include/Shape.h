#pragma once
#include "SFML/Graphics.hpp"

/*! \file Shape.h
* \brief The shape class
* 
* Inherits SFML's Drawable class.
* Abstract class for the shapes.
*/

class Shape : public sf::Drawable
{
protected:
	/*! \var sf::VertexArray VArr;
	* \brief SFML's VertexArray class which will be used to store locations of points for the shapes
	*/
	sf::VertexArray VArr;

	/*!
	* \param target sf::RenderTarget.
	* \param states sf::RenderStates.
	*/
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const = 0;//!<Abstract function in which all the shape classes will override when its used

	/*!
	* \param VertexCount An integer.
	* \param type sf::PrimitiveType.
	* \param Colour sf::Color.
	*/
	Shape(int VertexCount, sf::PrimitiveType type, sf::Color Colour);//!<Abstract constructor for the shape class, used by derived shape classes.
};