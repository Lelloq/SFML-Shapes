#include <SFML/Graphics.hpp>
#include "Hexagon.h"

//Default hexagon constructor where it will draw an hexagon at 200 500
Hexagon::Hexagon() : Shape(8, sf::PrimitiveType::TriangleFan, sf::Color::White)
{
	VArr[0] = sf::Vector2f(200.f, 500.f);//Centre point
	//Points that create the triangles which in the end will create a hexagon shape
	VArr[1] = sf::Vector2f(300.f, 500.f);
	VArr[2] = sf::Vector2f(250.f, 590.f);
	VArr[3] = sf::Vector2f(150.f, 590.f);
	VArr[4] = sf::Vector2f(100.f, 500.f);
	VArr[5] = sf::Vector2f(150.f, 420.f);
	VArr[6] = sf::Vector2f(250.f, 420.f);
	VArr[7] = VArr[1].position;//Ensures that the triangle fan completes its shape
}

//Overloaded constructor where the specific points are chosen as well as the colour
Hexagon::Hexagon(sf::Vector2f p[7], sf::Color c) : Shape(8, sf::PrimitiveType::TriangleFan, sf::Color::White)
{
	for (int i = 0; i < 7; i++)
	{
		VArr[i].position = p[i];
	}
	VArr[7].position = VArr[1].position;
}

//Overridden function from the base class to draw the shape
void Hexagon::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(VArr, states);
}
