#pragma once
#include <vector>
#include "Joueur.h"

class  Route
{
public:
	Route();

	void SetRouteX(int X);
	int GetRouteX();

	void SetRouteY(int Y);
	int GetRouteY();

	void SetRouteGlobale(int index, int value);
	int GetRouteGlobale(int index);

	void MoveRight();
	void MoveLeft();

	bool IsPlayerOnRoad(int playerX, int PlayerY);

	virtual ~Route();
protected:
	bool IsOnRoad();

private:
	std::vector<int> routeGlobale;
};