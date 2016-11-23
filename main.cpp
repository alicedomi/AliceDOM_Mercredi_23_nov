#pragma once

#include <iostream>
#include <string>
#include"cadre.h"

int main()
{ 
	Cadre C = Cadre();
	C.afficher();
	
	if (C.estCarre())
		cout << "C'est un carre." << endl;
	else cout << "Ce n'est pas un carre." << endl;

	system("pause");
	return 0;
}

/*
1 - Le r�le du constructeur :
Fonction membre appel�e automatiquement � chaque fois que l'on cr�e un objet bas� sur cette classe.
Le constructeur permet l'initialisation des variables. Un constructeur n'a pas de type de retour,
mais peut avoir des arguments.

Quand est-il ex�cut� :
L'appel du constructeur se fait lors de la cr�ation de l'objet.

2- Le r�le du destructeur :
Fonction membre qui intervient automatiquement lors de la destruction d'un objet.
Un destructeur n'a pas de type ni d'argument.

Quand est-il ex�cut� :
Objet statique :  appel� de fa�on implicite d�s que le programme quitte la port�e dans lequel l'objet existe
Objet dynamique : appel� gr�ce au mot cl� delete qui permet de lib�rer la m�moire occup�e par l'objet.

3- Comment rep�re-t-on un constructeur d'une classe :
Ils portent le m�me nom que la classe par exemple pour la classe point -> point::point

Peut-il y en avoir plusieurs :
Oui, car gr�ce � �a il est ensuite possible d'initialiser diff�remment un m�me objet selon la m�thode de construction utilis�e.

4- Qu'est-ce que la surd�finition de fonction :
Plusieurs fois la m�me fonction avec des ent�tes diff�rentes

5- Quelle est la signification de public et private dans une classe ?
Public : accessible depuis n'importe quelle fonction
Private : uniquement accessible d'une part, depuis les fonctions qui sont membres de la classe et d'autre part, depuis
les fonctions et classes autoris�es	explicitement par la classe.


*/

