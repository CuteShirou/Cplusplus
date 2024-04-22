#include "Rectangle.h"

Rectangle::Rectangle()
{
	rectWidth = 0;
	rectHeight = 0;
	rectx = 0;
	recty = 0;
}

Rectangle::Rectangle(int width, int height, int x, int y) : rectWidth(width), rectHeight(height), rectx(x), recty(y)
{
}

void Rectangle::PoseSet(int x, int y)
{
	rectx = x;
	recty = y;
}

void Rectangle::SizeSet(int width, int height)
{
	rectWidth = width;
	rectHeight = height;
}

int Rectangle::GetPose()
{
	return rectx, recty;
}

int Rectangle::GetSize()
{
	return rectWidth, rectHeight;
}

Rectangle::~Rectangle()
{
}