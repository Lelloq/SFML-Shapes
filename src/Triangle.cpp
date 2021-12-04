#include <SFML/Graphics.hpp>
#include "Triangle.h"

//Default hexagon constructor where it will draw a triangle using points 10 10, 100 10 and 55 100
Triangle::Triangle() : Shape(3, sf::PrimitiveType::Triangles, sf::Color::White)
{
	VArr[0].position = sf::Vector2f(10.f,10.f);
	VArr[1].position = sf::Vector2f(100.f, 10.f);
	VArr[2].position = sf::Vector2f(55.f, 100.f);
}

//Overloaded constructor where the specific points are chosen as well as the colour
Triangle::Triangle(sf::Vector2f p[3], sf::Color c) : Shape(3, sf::PrimitiveType::Triangles, c)
{
	for (int i = 0; i < 3; i++)
	{
		VArr[i].position = p[i];
	}
}

//Overridden function from the base class to draw the shape
void Triangle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(VArr, states);
}