#include "Joueur.h"

Joueur::Joueur(int screenWidth) : screenWidth(screenWidth)
{
    x = screenWidth / 2;
}

Joueur::~Joueur()
{
}

void Joueur::MoveRight()
{
    x++;
    if (x >= screenWidth)
    {
        x = screenWidth - 1;
    }
}

void Joueur::MoveLeft()
{
    x--;
    if (x < 0)
    {
        x = 0;
    }
}

bool Joueur::IsCollision(int obstacleX, int obstacleY)
{
    return (x == obstacleX && 0 == obstacleY);
}

int Joueur::PlayerX() const
{
    return x;
}

int Joueur::PlayerY() const
{
    return 0;
}