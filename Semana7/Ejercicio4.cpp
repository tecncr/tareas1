#include "iostream"
using namespace std;

int leer_carta(string orden) {

	char carta;
	int valor;
	bool condiciones1, condiciones2, condiciones3;

	do {
		cout << "Ingrese la " << orden << " carta: " << endl;
		cin >> carta;
		if (carta!='1' and carta!='2' and carta!='3' and carta!='4' and carta!='5' and carta!='6') {
			condiciones1 = false;
		} else {
			condiciones1 = true;
		}
		if (carta!='7' and carta!='8' and carta!='9' and carta!='x' and carta!='X' and carta!='a') {
			condiciones2 = false;
		} else {
			condiciones2 = true;
		}
		if (carta!='A' and carta!='J' and carta!='Q' and carta!='K' and carta!='j' and carta!='q' and carta!='k') {
			condiciones3 = false;
		} else {
			condiciones3 = true;
		}

		if (condiciones1 == false and condiciones2 == false and condiciones3 == false) {
			cout << "El valor de la carta ingresado es invalido. " << endl;
			cout << "Por favor ingrese valores numericos entre 1 y 9, tambien" << endl;
			cout << "puede ingresar A para el as, X (para el 10), J, Q o K." << endl;
		}

	} while (condiciones1 == false and condiciones2 == false and condiciones3 == false);
	
	switch (carta) {
	case 'a':
		valor = 1;
		break;
	case 'A':
		valor = 1;
		break;
	case '1':
		valor = 1;
		break;
	case '2':
		valor = 2;
		break;
	case '3':
		valor = 3;
		break;
	case '4':
		valor = 4;
		break;
	case '5':
		valor = 5;
		break;
	case '6':
		valor = 6;
		break;
	case '7':
		valor = 7;
		break;
	case '8':
		valor = 8;
		break;
	case '9':
		valor = 9;
		break;
	case 'x':
		valor = 10;
		break;
	case 'X':
		valor = 10;
		break;
	case 'j':
		valor = 11;
		break;
	case 'J':
		valor = 11;
		break;
	case 'q':
		valor = 12;
		break;
	case 'Q':
		valor = 12;
		break;
	case 'k':
		valor = 13;
		break;
	case 'K':
		valor = 13;
		break;
	}

	return valor;
}

int main(int argc, char * argv[]){

	int valor1, valor2;

	cout << "Programa que suma dos cartas de la baraja." << endl;

	valor1 = leer_carta("primera");
	valor2 = leer_carta("segunda");

	cout << "La suma de las dos cartas es " << valor1 + valor2 << endl;

	return 0;
}