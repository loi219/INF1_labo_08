/* Fichier : stat.h
 * Auteur : Sven Rouvinez - Joel Schär / HEIG-VD
 * Date: 13.12.2016
 *
 * But:
 *
 * Modifications :
 *
 */


#ifndef INF1_LABO_08_STAT_H
#define INF1_LABO_08_STAT_H



/**
 * @brief: asks the user if he wants to restart or exit the program
 *       checks if the inputs are valid
 *
 * parameters:
 *      none
 *
 * @return:
 *      isValid: boolean containing the answer of the user to the question
 *               "do you want to start again?"
 **/
void genStat(int tab[], const int elements, const int minElement, int throws);

/**
 * @brief: asks the user if he wants to restart or exit the program
 *       checks if the inputs are valid
 *
 * parameters:
 *      none
 *
 * @return:
 *      isValid: boolean containing the answer of the user to the question
 *               "do you want to start again?"
 **/
void printStat(const int tab[], const int elements, const int throws);

#endif //INF1_LABO_08_STAT_H
