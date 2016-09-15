#pragma once
#include "Carte.h"
#include <string>
#include <iostream>
#include <sstream>


class Joueur
{
	const std::string nom;

	Carte* _carte;

public: 
	Joueur(std::string p, Carte* c);

	void nouveauTour();
	std::string toString();
	bool aperdu();
	std::string name();
	Carte* courante();
	Carte* carteSuivante();

};

