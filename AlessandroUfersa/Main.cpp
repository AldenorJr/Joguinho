#include <iostream>
#include "Pacote.h"
#include "Cores.h"
#include "Rede.h"

using namespace std;

// pista é o equivalente a 0 - 100

string static topCar = "\xDB\xDB\xDB\xDB\xDB\xDB\xDC\xDB\xDC\xDC";
string static bottomCar = "\xDFOO\xDF\xDF\xDF\xDF\xDFO\xDF";

int static initialPosition = 0;

int static positionPlayer1 = 0;
int static positionPlayer2 = 0;

int static accelerationPlayer1 = 0;
int static accelerationPlayer2 = 0;

bool static isStepsOli1 = false;
bool static isStepsOli2 = false;

int static stepsGived = 0;

void clearTerminal();
void sortDates();
void printDates();

int main() {

	do {
		clearTerminal();
		printDates();
		sortDates();
		positionPlayer1 = accelerationPlayer1+positionPlayer1;
		positionPlayer2 = accelerationPlayer2+positionPlayer2;
		if (isStepsOli1) positionPlayer1--;
		if (isStepsOli2) positionPlayer2--;
		stepsGived++;
		system("pause");
	} while (positionPlayer1 <= 100 && positionPlayer2 <= 100);


	
}

void printSpecialLine(int startPosition, int endPosition) {
	for (int i = 0; i < endPosition; ++i) {
		if (i == 100) {
			std::cout << "|";
		}
		else {
			std::cout << "-";
		}
	}  
	  
	std::cout << std::endl;
}

void printDates() {
	cout << endl;
	cout << endl;
	cout << endl;
	cout << right; cout.width(positionPlayer1); cout << "\xDB\xDB\xDB\xDB\xDB\xDB\xDC\xDB\xDC\xDC" << endl;
	cout << right; cout.width(positionPlayer1); cout << "\xDFOO\xDF\xDF\xDF\xDF\xDFO\xDF" << endl;
	cout << right; cout.width(102); cout << "100";
	cout << endl;
	printSpecialLine(0, 120);
	cout << endl;
	cout << right; cout.width(positionPlayer2); cout << "\xDB\xDB\xDB\xDB\xDB\xDB\xDC\xDB\xDC\xDC" << endl;
	cout << right; cout.width(positionPlayer2); cout << "\xDFOO\xDF\xDF\xDF\xDF\xDFO\xDF" << endl;
	cout << right; cout.width(102); cout << "100";
	cout << endl;
	printSpecialLine(0, 120);
	cout << endl;
	cout << right << "Posicao do jogador 1: " << positionPlayer1 << endl;
	cout << right << "Oleo na pista do jogador 1: " << isStepsOli1 << endl;
	cout << right << "Aceleracao do jogador 1: " << accelerationPlayer1 << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << left << "Posicao do jogador 2: " << positionPlayer2 << endl;
	cout << right << "Oleo na pista do jogador 2: " << isStepsOli2 << endl;
	cout << left << "Aceleracao do jogador 2: " << accelerationPlayer2 << endl;
	cout << endl;
	cout << endl;
	cout << right << "Andadas dada: " << stepsGived << endl;
	cout << endl;
	cout << endl;
}

void clearTerminal() {
	system("cls");
}

void sortDates() {
	accelerationPlayer1 = rand() % 10;
	accelerationPlayer2 = rand() % 10;

	int randomNumber = rand() % 2;
	if (randomNumber == 0) {
		isStepsOli1 = false;
	} 
	else {
		isStepsOli1 = true;
	}

	randomNumber = rand() % 2;
	if (randomNumber == 0) {
		isStepsOli2 = false;
	}
	else {
		isStepsOli2 = true;
	}
}

