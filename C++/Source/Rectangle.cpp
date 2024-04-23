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

UserRectangle::UserRectangle()
{
	userId = 0;
}

UserRectangle::UserRectangle(int width, int height, int x, int y, int id)
{
}

void UserRectangle::SetId(int id)
{
}

int UserRectangle::GetId()
{
	return 0;
}

UserRectangle::~UserRectangle()
{
}

void UserRectangle::SetScale(float scale) {
	m_scale = scale;
}

float UserRectangle::GetScale() {
	return m_scale;
}

int UserRectangle::GetWidth() {
	return rectWidth * m_scale;
}

int UserRectangle::GetHeight() {
	return rectHeight * m_scale;
}