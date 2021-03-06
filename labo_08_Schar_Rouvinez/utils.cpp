/* Fichier : utils.cpp
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

#include "utils.h"
#include <ctime>
#include <cstdlib>


/***************************Recommencer****************************/
bool doAgain() {

	char const YES = 'Y';
	char const NO = 'N';
	char answer;
	bool isValid;

	do {
		cout << "Voulez-vous recommencer ? [" << YES << "/" << NO << "]";
		isValid = bool(cin >> answer);
		if (isValid)
			cin.clear();
		CLEAR_BUFFER;
		// works even if the user forget the capital letter
	} while (!isValid || !(toupper(answer) == YES || toupper(answer) == NO));

	return (toupper(answer) == YES);
}

/***************************Saisie****************************/
int input(const string& message, int limitMin, int limitMax,
		const int WIDTH_INT, const int WIDTH_TEXT, const string error) {
	int userInput;
	bool isValid;
	do {
		//shows message that includes the boundaries that the user must respect
		cout << message << setw(WIDTH_TEXT - message.length()) << ": [ "
				<< setw(WIDTH_INT) << limitMin << " et " << setw(WIDTH_INT)
				<< limitMax << "] :";
		isValid = bool(cin >> userInput);

		if (!isValid || userInput < limitMin || userInput > limitMax) {
			cout << error << endl;
			cin.clear();
		}
		CLEAR_BUFFER;

	} while (!isValid || userInput < limitMin || userInput > limitMax);

	return userInput;
}

/***************************Quitter****************************/
void toQuit(string message) {
	cout << message;
	cin.get();
}

/***************************Aléatoire****************************/
int random(const int min, const int max) {

	//initialisation du générateur une seule fois au début du programme
	static bool first = true;
	if (first) {
		srand((unsigned) time(NULL));
		first = ! first;
	}
	return (rand() % (max - min + 1)) + min;
}//fin random