/* Fichier : utils.h
 * Auteur : Sven Rouvinez - Joel Schär / HEIG-VD
 * Date: 12.12.2016
 *
 * But: Start of a library containing the necessary base functions
 *      of any program.
 *      For now, contain input and 'try again' loop.
 *
 * Modifications : 06.12.2016 / Sven Rouvinez / Updating the commentary
 *
 */

#ifndef LABO07_UTILS_H
#define LABO07_UTILS_H


#include <string>
#include <iostream>
#include <iomanip>
#include <climits>


#define CLEAR_BUFFER cin.ignore(INT_MAX, '\n')
#define WIDTH_INT_BASE 4u
#define WIDTH_TEXT_BASE 30u

using namespace std;


/**
 * @brief: demande à l'utilisateur s'il veut recommencer
 *
 * parameters:
 *      none
 *
 * @return isValid retourne la réponse en boolean de l'utilisateur
 **/
bool doAgain();

/**
 * @brief: demande à l'utilisateur les valeurs qu'il veut et retourne la valeure correcte selon des critères
 *
 * parameters:
 *      @param [in] message message d'invitation pour à l'utilisateur pour entrer sa valeur
 *      @param [in] limitMin borne minimal
 *      @param [in] limitMax borne maximal
 *      @param [in] error affiche ce message si l'entrée est fausse
 *      @param [in] WIDTH_INT contient la valeur de la largeur
 *      @param [in] WIDTH_TEXT largeur utilisée pour aligner le texte
 *
 *
 * @return userInput valeur entrée par l'utilisateur
 *
 **/
int input(const string& message, int limitMin, int limitMax, const int WIDTH_INT=WIDTH_INT_BASE, const int WIDTH_TEXT=WIDTH_TEXT_BASE, const string error="Mauvaise saisie. Veuillez reessayez");


/**
 * @brief: affiche un message pour demander à l'utlisateur s'il veut quitter
 *
 * @param [in] message message affiché à l'utilisateur
 *
 * @return none
 **/
void toQuit(string message);

/**
 * @brief: génère un chiffre aléatoire dans une intervalle donnée
 *
 * @param [in] min valeur minimum
 * @param [in] max valeur maximum
 *
 * @return none
 *
 **/
int random(const int min, const int max);

#endif //LABO07_UTILS_H
