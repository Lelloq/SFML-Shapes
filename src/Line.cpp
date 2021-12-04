#include <SFML/Graphics.hpp>
#include "Line.h"

//Default line constructor where it will draw a line at 200 300 to 515 150
Line::Line() : Shape(2, sf::PrimitiveType::Lines, sf::Color::White)
{
	VArr[0].position = sf::Vector2f(200.f,300.f);
	VArr[1].position = sf::Vector2f(515.f, 150.f);
}

//Overloaded constructor where the specific points are chosen as well as the colour
Line::Line(sf::Vector2f p[2], sf::Color c) : Shape(2, sf::PrimitiveType::Lines, c)
{
	for (int i = 0; i < 2; i++)
	{
		VArr[i].position = p[i];
	}
}

//Overridden function from the base class to draw the shape
void Line::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(VArr, states);
}