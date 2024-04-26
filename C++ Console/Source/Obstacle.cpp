#include "Obstacle.h"

Obstacle::Obstacle()
{
}
Obstacle::~Obstacle()
{
}

Pothole::Pothole()
{
}
Pothole::~Pothole()
{
}

bool Pothole::IsCollision(int playerX, int playerY)
{
    return false;
}

Car::Car()
{
}
Car::~Car()
{
}

bool Car::IsCollision(int playerX, int playerY)
{
    return false;
}

Person::Person()
{
}
Person::~Person()
{
}

bool Person::IsCollision(int playerX, int playerY)
{
    return false;
}