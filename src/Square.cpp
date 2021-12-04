#include <SFML/Graphics.hpp>
#include "Square.h"

//Default square constructor where it will draw a square at 200 200
Square::Square() : Shape(4, sf::PrimitiveType::Quads, sf::Color::White)
{
	const float DEFAULTSIZE = 100.f;
	sf::Vector2f Centre = sf::Vector2f(200.f, 200.f);
	float PointsX[2] = { Centre.x - DEFAULTSIZE / 2, Centre.x + DEFAULTSIZE / 2 };
	float PointsY[2] = { Centre.y - DEFAULTSIZE / 2, Centre.y + DEFAULTSIZE / 2 };
	VArr[0].position = sf::Vector2f(PointsX[0], PointsY[0]);
	VArr[1].position = sf::Vector2f(PointsX[1], PointsY[0]);
	VArr[2].position = sf::Vector2f(PointsX[1], PointsY[1]);
	VArr[3].position = sf::Vector2f(PointsX[0], PointsY[1]);
}

//Overloaded constructor where the specific centre point is chosen as well as the colour
Square::Square(sf::Vector2f Origin, sf::Color c, float size) : Shape(4, sf::PrimitiveType::Quads, c)
{
	float PointsX[2] = { Origin.x - size / 2, Origin.x + size / 2 };
	float PointsY[2] = { Origin.y - size / 2, Origin.y + size / 2 };
	VArr[0].position = sf::Vector2f(PointsX[0], PointsY[0]);
	VArr[1].position = sf::Vector2f(PointsX[1], PointsY[0]);
	VArr[2].position = sf::Vector2f(PointsX[1], PointsY[1]);
	VArr[3].position = sf::Vector2f(PointsX[0], PointsY[1]);
}

//Overridden function from the base class to draw the shape
void Square::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(VArr, states);
}
