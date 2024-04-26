#pragma once

class Joueur
{
public:
    Joueur(int screenWidth);
    virtual ~Joueur();

    void MoveRight();

    void MoveLeft();

    bool IsCollision(int obstacleX, int obstacleY);

    int PlayerX() const;

    int PlayerY() const;

private:
    int x; 
    int screenWidth;
};