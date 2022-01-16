#include "Rectangle.h"
#include "Window.h"
#include <stdexcept>
void Rectangle::Draw(Window w)
{
	w.DrawRectangle(1, 2, 3, 4);
}

void Rectangle::Bounds(Rect& r)
{
	throw std::logic_error("The method or operation is not implemented.");
}

bool Rectangle::Intersects(const Point&)
{
	throw std::logic_error("The method or operation is not implemented.");
}

void Rectangle::Insert(Glyph*, int)
{
	throw std::logic_error("The method or operation is not implemented.");
}

void Rectangle::Remove(Glyph*)
{
	throw std::logic_error("The method or operation is not implemented.");
}

Glyph* Rectangle::Child(int)
{
	throw std::logic_error("The method or operation is not implemented.");
}

Glyph* Rectangle::Parent()
{
	throw std::logic_error("The method or operation is not implemented.");
}
