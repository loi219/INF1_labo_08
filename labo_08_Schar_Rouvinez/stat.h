/* Fichier : stat.h
 * Auteur : Sven Rouvinez - Joel Schär / HEIG-VD
 * Date: 13.12.2016
 *
 * But: fonctions nécessaire pour générer les tableaux et faire les statistiques
 *
 *
 */

#ifndef INF1_LABO_08_STAT_H
#define INF1_LABO_08_STAT_H

/**
 * @brief: insère les valeurs dans un tableau
 *
 * parameters:
 * @param [in] tab[] tableau qui sera rempli
 * @param [in] elements nombre d'éléments dans le tableau
 * @param [in] minElement élément de départ
 * @param [in] throws nombre de lancés
 *
 * @return: none
 */
void addRandValue(int tab[], const int elements, const int minElement, int throws);

/**
 * @brief: calcul les pourcentages d'éléments présents
 *
 * parameters:
 * @param [in] tab[] tableau de valeurs
 * @param [in] elements
 * @param [in] throws nombre de lancés
 *
 * @return: none
 */
void computeStat(const int tab[], const int elements, const int throws);

#endif //INF1_LABO_08_STAT_H
