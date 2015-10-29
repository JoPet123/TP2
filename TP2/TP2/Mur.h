#pragma once

#include <vld.h>
#include <SFML\Graphics.hpp>
#include <iostream>


class Mur
{
private:
	float longueure;
	float largeur;
	float posX;
	float posY;
	enum orientation{NS, EO};
	orientation ori;
public:
	Mur();
	~Mur();
};