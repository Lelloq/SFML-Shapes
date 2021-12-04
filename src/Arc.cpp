#include <SFML/Graphics.hpp>
#include "Arc.h"

//Default arc constructor where it will draw an arc at 900 200 with a radius of 70 pixels in x and 60 in y
Arc::Arc() : Shape(60, sf::PrimitiveType::LinesStrip, sf::Color::White)
{
	float theta = 0.f;
	float inc = 2 * PI / 60;
	for (int i = 0; i < 60; i++)
	{
		VArr[i].position = sf::Vector2f(900.f + cos(theta) * 70, 200.f + sin(theta) * 60);
		if (i > 15)
		{
			VArr[i].position = VArr[15].position;
		}
		theta += inc;
	}
}

//Overloaded arc constructor where the start position is chosen as well as the colour, number of points and the radius for the x and y axis
Arc::Arc(sf::Vector2f p, sf::Color c, int arcSize, int pCount, float RadX, float RadY) : Shape(pCount, sf::PrimitiveType::LinesStrip, c)
{
	float theta = 0.f;
	float inc = 2 * PI / pCount;
	for (int i = 0; i < pCount; i++)
	{
		VArr[i].position = sf::Vector2f(p.x + cos(theta) * RadX, p.y + sin(theta) * RadY);
		if(i > arcSize)
		{
			VArr[i].position = VArr[arcSize].position;
		}
		theta += inc;
	}
}

//Overridden function from the base class to draw the shape
void Arc::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(VArr, states);
}