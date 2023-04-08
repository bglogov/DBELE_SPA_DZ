#include <SFML/Graphics.hpp>
#include "Cvijet.h"


using namespace sf;

Cvijet::Cvijet(RenderWindow* w)
{
	this->window = w;
}

void Cvijet::make_shape()
{
	CircleShape shape(50.f, 20);
	shape.setPosition(100, 100);
	shape.setOutlineThickness(20.f);
	shape.setOutlineColor(Color(255, 0, 0));
	shape.setFillColor(Color(255, 255, 0));
	window->draw(shape);
	
}

void Cvijet::make_line()
{
	RectangleShape line(Vector2f(150.f, 5.f));
	line.setPosition(152, 215);
	line.rotate(90);
	line.setFillColor(Color(0, 255, 0));
	window->draw(line);
}

void Cvijet::make_convex()
{
	ConvexShape convex;
	convex.setPointCount(4);
	convex.setPoint(0, Vector2f(150.f, 300.f));
	convex.setPoint(1, Vector2f(200.f, 260.f));
	convex.setPoint(2, Vector2f(350.f, 230.f));
	convex.setPoint(3, Vector2f(210.f, 305.f));
	convex.setFillColor(Color(0, 255, 0));
	window->draw(convex);
}

void Cvijet::draw()
{
	make_shape();
	make_convex();
	make_line();
}
