#include <SFML/Graphics.hpp>
#include "Circle.h"

//Default circle constructor where it will draw a circle at 600 400 with a radius of 100 pixels
Circle::Circle() : Shape(60, sf::PrimitiveType::TriangleFan, sf::Color::White)
{
	VArr[0].position = sf::Vector2f(800.f, 600.f);
	float theta = 0.f;
	float inc = 2*PI / 60;
	for(int i = 1; i < 60; i++)
	{
		VArr[i].position = sf::Vector2f(800.f + cos(theta) * 100, 600.f + sin(theta) * 100);
		theta += inc;
	}
	VArr[59].position = VArr[1].position;//Connects the last triangle fan to the first position to complete the shape
}

//Overloaded circle constructor where the centre position is chosen as well as the colour, number of points and the radius
Circle::Circle(sf::Vector2f CentrePos, sf::Color c, int pCount, float Radius) : Shape(pCount, sf::PrimitiveType::TriangleFan, c)
{
	VArr[0].position = CentrePos;
	float theta = 0.f;
	float inc = 2 * PI / pCount;
	for (int i = 1; i < pCount; i++)
	{
		VArr[i].position = sf::Vector2f(CentrePos.x + cos(theta) * Radius, CentrePos.y + sin(theta) * Radius);
		theta += inc;
	}
	int FinalPoint = pCount - 1;
	VArr[FinalPoint].position = VArr[1].position;//Connects the last triangle fan to the first position to complete the shape
}

//Overridden function from the base class to draw the shape
void Circle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(VArr, states);
}