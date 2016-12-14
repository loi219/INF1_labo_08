/* Fichier : stat.cpp
 * Auteur : Sven Rouvinez - Joel Schär / HEIG-VD
 * Date: 13.12.2016
 *
 * But:
 *
 *
 * Modifications :
 *
 */

#include "utils.h"
#include <cmath>


void genStat(int tab[], const int elements, const int minElement, const int throws){

   for(int i = 0;i < throws; i++){
      tab[random(minElement, elements)] += 1;
   }
}

//remplacer les valeurs "10" de setw par des constantes

void printStat(const int tab[], const int elements, const int throws){
   for(int i = 0; i < elements; i++ ){
      int percentElement = (int) round( (double)tab[i] / throws * 100);
      cout << setw(10) << "element [" << i << "]" << setw (10) << percentElement << "    ";
      for(int p = 0; p < percentElement; p++)
         cout << "=";
      cout << endl;
   }
}
