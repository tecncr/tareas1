/* El presente algoritmo se alargó "innecesariamente", no obstante
esto fue hecho con el fin de aplicar la estructura selectiva múltiple */

#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	double original, final, factor;
	char letra_factor;

	cout << "Programa que calcula el puntaje de un participante." << endl;

	do {
		cout << "Ingrese el puntaje original (de 0 a 10): ";
		cin >> original;
		if (original<0 or original>10) {
			cout << "Puntaje invalido. Este no debe ser negativo ni mayor a 10." << endl;
		}
	} while (original<0 or original>10);

	if (original>=9) {
		letra_factor = 'a';
	} else {
		if (original>=6) {
			letra_factor = 'b';
		} else {
			if (original>=1) {
				letra_factor = 'c';
			} else {
				letra_factor = 'd';
			}
		}
	}

	switch (letra_factor) {
	case 'a':
		factor = 10;
		break;
	case 'b':
		factor = 9;
		break;
	case 'c':
		factor = 6;
		break;
	case 'd':
		factor = 0;
		break;
	}

	final = original*factor;

	cout << "El puntaje final del participante es " << final << endl;

	return 0;
}