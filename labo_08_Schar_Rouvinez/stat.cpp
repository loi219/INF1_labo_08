/* Fichier : stat.cpp
 * Auteur : Sven Rouvinez - Joel Schär / HEIG-VD
 * Date: 13.12.2016
 *
 * But: fonctions nécessaire pour générer les tableaux et faire les statistiques
 *
 *
 */

#include "utils.h"
#include <cmath>

void addRandValue(int tab[], const int nbElements, const int minElement,
		const int throws) {

	for (int i = 0; i < throws; i++) {
		tab[random(minElement, nbElements)] += 1;
	}
}

void computeStat(const int tab[], const int nbElements, const int throws) {
	const int SPACE = 10;

	for (int i = 0; i < nbElements; i++) {

		int percentElement = (int) round((double) tab[i] / throws * 100);
		cout << setw(SPACE) << "element [" << i << "]" << setw(SPACE)
				<< percentElement << "    ";

		for (int p = 0; p < percentElement; p++) {
			cout << "=";
		}
		cout << endl;
	}
}
