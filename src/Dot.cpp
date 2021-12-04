#include <SFML/Graphics.hpp>
#include "Dot.h"

//Default dot constructor where it will draw a dot at 512 400
Dot::Dot() : Shape(1, sf::PrimitiveType::Points, sf::Color::White)
{
	VArr[0].position = sf::Vector2f(512.f,400.f);//Position of the dot
};

//Overloaded constructor where the specific point is chosen as well as the colour
Dot::Dot(sf::Vector2f p, sf::Color c) : Shape(1, sf::PrimitiveType::Points, c)
{
	VArr[0].position = sf::Vector2f(p);
};

//Overridden function from the base class to draw the shape
void Dot::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(VArr,states);
}