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
1 - Le rôle du constructeur :
Fonction membre appelée automatiquement à chaque fois que l'on crée un objet basé sur cette classe.
Le constructeur permet l'initialisation des variables. Un constructeur n'a pas de type de retour,
mais peut avoir des arguments.

Quand est-il exécuté :
L'appel du constructeur se fait lors de la création de l'objet.

2- Le rôle du destructeur :
Fonction membre qui intervient automatiquement lors de la destruction d'un objet.
Un destructeur n'a pas de type ni d'argument.

Quand est-il exécuté :
Objet statique :  appelé de façon implicite dès que le programme quitte la portée dans lequel l'objet existe
Objet dynamique : appelé grâce au mot clé delete qui permet de libérer la mémoire occupée par l'objet.

3- Comment repère-t-on un constructeur d'une classe :
Ils portent le même nom que la classe par exemple pour la classe point -> point::point

Peut-il y en avoir plusieurs :
Oui, car grâce à ça il est ensuite possible d'initialiser différemment un même objet selon la méthode de construction utilisée.

4- Qu'est-ce que la surdéfinition de fonction :
Plusieurs fois la même fonction avec des entêtes différentes

5- Quelle est la signification de public et private dans une classe ?
Public : accessible depuis n'importe quelle fonction
Private : uniquement accessible d'une part, depuis les fonctions qui sont membres de la classe et d'autre part, depuis
les fonctions et classes autorisées	explicitement par la classe.


*/

