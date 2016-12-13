/*
---------------------------------------------------------------------------------------
Laboratoire : Labo08

Fichier     : Labo08_Schar_Rouvinez.cpp

Auteur(s)   :

Date        : Dec 12, 2016

But         :

Remarque(s) :

Compilateur : gcc version 6.2.1 20160916 (Red Hat 6.2.1-2) (GCC)
---------------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <string>
#include "utils.h"
#include "stat.h"

using namespace std;

int main(){

   const int MIN_ELEMENTS = 0;
   const int MAX_ELEMENTS = 100;
   const string MSG_ELEMTNS = "nbre elements";


   const int MIN_THROWS = 0;
   const int MAX_THROWS = 10000;
   const string MSG_THROWS = "nbre de lances";

   const int WIDTH_MSG = 16;
   const int WIDTH_INT = 1;
   const string MSG_ERROR = "Mauvaise saisie";



do{

   int nbElements = input(MSG_ELEMTNS, MIN_ELEMENTS, MAX_ELEMENTS, WIDTH_INT, WIDTH_MSG, MSG_ERROR);
   int nbThrows   = input(MSG_THROWS, MIN_THROWS, MAX_THROWS, WIDTH_INT, WIDTH_MSG, MSG_ERROR);

   int tabElements[nbElements] = {};

   genStat(tabElements,nbElements,MIN_ELEMENTS,nbThrows);

   getPercent(tabElements, nbElements, nbThrows);

   printStat(tabElements, nbElements);


}while(doAgain());




	return EXIT_SUCCESS;
}
