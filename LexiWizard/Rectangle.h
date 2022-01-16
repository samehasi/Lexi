#pragma once
#include "Glyph.h"
class Rectangle :
    public Glyph
{

	void Draw(Window) override;


	void Bounds(Rect&) override;


	bool Intersects(const Point&) override;


	void Insert(Glyph*, int) override;


	void Remove(Glyph*) override;


	Glyph* Child(int) override;


	Glyph* Parent() override;

};

