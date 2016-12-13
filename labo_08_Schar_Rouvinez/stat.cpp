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


void genStat(int tab[], const int elements, const int minElement, int throws){

   for(int i = 0;i < throws; i++){
      tab[random(minElement, elements)] += 1;
   }

}

void getPercent(int tab[], const int elements, const int throws){
   for (int i = 0; i < elements; i++){
      tab[i] = (int) round( (double)tab[i] / throws * 100);
   }
}

void printStat(int tab[], const int elements){
   for(int i = 0; i < elements; i++ ){
      cout << setw(10) << "element [" << i << "]" << setw (10) << tab[i] << "    ";
      for(int p = 0; p < tab[i]; p++)
         cout << "=";
      cout << endl;
   }
}
