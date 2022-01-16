#pragma once


class Window;
class Rect;
class Point;


class Glyph
{
	virtual void Draw(Window) = 0;
	virtual void Bounds(Rect&) = 0;
	virtual bool Intersects(const Point&) = 0;

	virtual void Insert(Glyph*, int) = 0;
	virtual void Remove(Glyph*) = 0;
	virtual Glyph* Child(int) = 0;
	virtual Glyph* Parent() = 0;


private:
	Glyph* m_parent;
};

