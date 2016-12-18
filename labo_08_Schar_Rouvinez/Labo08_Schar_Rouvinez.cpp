/*
---------------------------------------------------------------------------------------
Laboratoire : Labo08

Fichier     : Labo08_Schar_Rouvinez.cpp

Auteur(s)   : Sven Rouvinez - Joel Schär / HEIG-VD

Date        : Dec 12, 2016

But         : Simuler un nombre choisi par l'utilisateur de lancés de dés. Cette simulation
              est mise en forme et affichée sour forme de graph.

Remarque(s) : utilisation uniquement de tableau "C"

Compilateur : gcc version 6.2.1 20160916 (Red Hat 6.2.1-2) (GCC)
---------------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <string>
#include "utils.h"
#include "stat.h"

using namespace std;

int main(){

   const int   MIN_ELEMENTS = 0;
   const int   MAX_ELEMENTS = 100;
   const string MSG_ELEMTNS = "nbre elements";

   const int    MIN_THROWS = 0;
   const int    MAX_THROWS = 10000;
   const string MSG_THROWS = "nbre de lances";

   const int    WIDTH_MSG = 16;
   const int    WIDTH_INT = 1;
   const string MSG_ERROR = "Mauvaise saisie";


do{
   //saisie du nombre d'éléments et du nombre de lancés par l'utilisateur
   int nbElements = input(MSG_ELEMTNS, MIN_ELEMENTS, MAX_ELEMENTS, WIDTH_INT, WIDTH_MSG, MSG_ERROR);
   int nbThrows   = input(MSG_THROWS, MIN_THROWS, MAX_THROWS, WIDTH_INT, WIDTH_MSG, MSG_ERROR);

   //initialisation du tableau en fonction du nombre d'éléments choisis par l'utilisateur
   int tabElements[nbElements] = {};

   //générer les lancés aléatoires en fonction du nombre choisi par l'utilssateur
   addRandValue(tabElements,nbElements,MIN_ELEMENTS,nbThrows);

   //afficher les valeurs générées sous forme de graphe
   computeStat(tabElements, nbElements, nbThrows);

   //l'utilisateur à le choix de recommencer
}while(doAgain());

   toQuit("Pressez ENTER pour quitter.");

	return EXIT_SUCCESS;
}
