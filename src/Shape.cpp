#include <SFML/Graphics.hpp>
#include "Shape.h"

//Shape constructor where dervied shape classes will use to create shapes
Shape::Shape(int vcount, sf::PrimitiveType type, sf::Color colour)
{
	VArr.resize(vcount);
	VArr.setPrimitiveType(type);
	for (int i = 0; i < vcount; i++)
	{
		VArr[i].color = colour;
	}
};