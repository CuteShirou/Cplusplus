#include <iostream>
#include <conio.h>
#include "Route.h"
#include "Joueur.h"
#include "Obstacle.h"

int main()
{
    const int screenWidth = 80;
    Route route;
    route.SetRouteX(0); 
    route.SetRouteY(0); 

    Joueur Joueur(screenWidth);

    Pothole pothole;

    bool gameOver = false;
    while (!gameOver)
    {
        for (int i = 0; i < screenWidth; ++i)
        {
            if (route.GetRouteX() + i == Joueur.PlayerX())
            {
                std::cout << "P";
            }
            else if (pothole.IsCollision(route.GetRouteX() + i, route.GetRouteY()))
            {
                std::cout << "O";
            }
            else
            {
                std::cout << "-";
            }
        }
        std::cout << std::endl;

        char input = _getch();
        switch (input)
        {
        case 'a': 
            Joueur.MoveLeft();
            break;
        case 'd': 
            Joueur.MoveRight();
            break;
        case 'q': 
            gameOver = true;
            break;
        }

        if (pothole.IsCollision(Joueur.PlayerX(), Joueur.PlayerY()))
        {
            gameOver = true;
        }

        for (int i = 0; i < 10000000; ++i)
        {
        }
    }

    std::cout << "Game Over!" << std::endl;

    return 0;
}