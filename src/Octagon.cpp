#include <SFML/Graphics.hpp>
#include "Octagon.h"

//Default octagon constructor where it will draw an octagon at 700 300
Octagon::Octagon() : Shape(10, sf::PrimitiveType::TriangleFan, sf::Color::White)
{
	VArr[0].position = sf::Vector2f(700.f,300.f);//Centre point of the triangle fan
	//Points that create the triangles which in the end will create an octagon shape
	VArr[1].position = sf::Vector2f(725.f, 287.5f);
	VArr[2].position = sf::Vector2f(725.f, 312.5f);
	VArr[3].position = sf::Vector2f(712.5f, 325.f);
	VArr[4].position = sf::Vector2f(687.5f, 325.f);
	VArr[5].position = sf::Vector2f(675.f, 312.5f);
	VArr[6].position = sf::Vector2f(675.f, 287.5f);
	VArr[7].position = sf::Vector2f(687.5f, 275.f);
	VArr[8].position = sf::Vector2f(712.5f, 275.f);
	VArr[9].position = VArr[1].position;//To ensure that the triangle fan completes its shape of an octagon
}

//Overloaded constructor where the specific points are chosen as well as the colour
Octagon::Octagon(sf::Vector2f p[9], sf::Color c) : Shape(10, sf::PrimitiveType::TriangleFan, sf::Color::White)
{
	for (int i = 0; i < 10; i++)
	{
		VArr[i].position = p[i];
	}
	VArr[10].position = VArr[1].position;
}

//Overridden function from the base class to draw the shape
void Octagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(VArr, states);
}