#pragma once
#include <iostream>

using namespace std;

class Cadre
{
	int xAncrage, yAncrage;
	int largeur, longueur;
	char motif;
public:
	Cadre() : xAncrage(10), yAncrage(5), longueur(10), largeur(5), motif('*') {};
	Cadre(const int x, const int y, const int longu, const int large, const char mot) : xAncrage(x), yAncrage(y), longueur(longueur), largeur(large), motif(mot) {};

	void setLongueur(const int l) { longueur = l; };
	void setLargeur(const int l) { largeur = l; };
	const int getLongueur() const { return longueur; };
	const int getLargeur() const { return largeur; };

	void setMotif(const char mot) { motif = mot; };
	const char getMotif() const { return motif; };

	int calculSurface() { return longueur * largeur; };
	int calculPerimetre() { return longueur * 2 + largeur * 2; };

	bool estCarre() const { return largeur == longueur; }

	void afficher() { cout << "x " << xAncrage << endl << "y " << yAncrage << endl << "longueur " << longueur << endl << "largeur " << largeur << endl << "motif " << motif << endl; };
};	