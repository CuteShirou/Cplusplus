#include "Route.h"

Route::Route()
{
    routeGlobale.resize(5);
    routeGlobale[0] = 1; // Bordure gauche
    routeGlobale[1] = 2; // Distance du bord gauche au centre
    routeGlobale[2] = 3; // Centre
    routeGlobale[3] = 2; // Distance du centre au bord droit
    routeGlobale[4] = 4; // Bordure droite
}


bool Route::IsOnRoad()
{
	return false;
}

void Route::SetRouteX(int X)
{
}

int Route::GetRouteX()
{
	return 0;
}

void Route::SetRouteY(int Y)
{
}

int Route::GetRouteY()
{
	return 0;
}

void Route::SetRouteGlobale(int index, int value)
{
}

int Route::GetRouteGlobale(int index)
{
	return 0;
}

Route::~Route()
{
}

void Route::MoveRight()
{
    // Déplacer chaque élément du tableau vers la droite
    for (int i = routeGlobale.size() - 1; i > 0; i--) {
        routeGlobale[i] = routeGlobale[i - 1];
    }
}

void Route::MoveLeft()
{
    // Déplacer chaque élément du tableau vers la gauche
    for (size_t i = 0; i < routeGlobale.size() - 1; i++) {
        routeGlobale[i] = routeGlobale[i + 1];
    }
}

bool Route::IsPlayerOnRoad(int playerX, int playerY)
{
    // Récupérer les coordonnées de la route
    int routeX = GetRouteX();
    int routeY = GetRouteY();

    // Vérifier si les coordonnées du joueur sont sur la route
    return (playerX >= routeX && playerX < routeX + routeGlobale.size() &&
        playerY == routeY);
}