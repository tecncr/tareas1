#include "iostream"
#include <math.h>
#include <conio.h>
using namespace std;

int main(int argc, char* argv[])
{
	double a, b, f;

	cout << "Programa que calcula el valor de la funcion F de acuerdo a los valores de A y B" << endl;
	cout << "Ingrese el valor de A: ";
	cin >> a;

	while (a < 0) {
		cout << "No se puede obtener la raiz cuadrada de un numero negativo." << endl;
		cout << "Ingrese el valor de A: ";
		cin >> a;
	}

	cout << "Ingrese el valor de B: ";
	cin >> b;

	while (a < 0) {
		cout << "A no puede ser negativo." << endl;
		cout << "Ingrese el valor de A: ";
		cin >> a;
	}

	if (a < b) {
		f = sqrt(a) * b;
	}
	if (a > b and b < 0) {
		f = pow(a,2) + b;
	}
	if (a > b and b >= 0) {
		f = a - b;
	}

	cout << "El valor de F es " << f << endl;

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}