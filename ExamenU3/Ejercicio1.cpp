#include <iostream>
#include <math.h>
using namespace std;

int ingresar_validar(string nombre_var);
int factorial(int num);

int ingresar_validar(string nombre_var) {
	int num;
	do {
		cout << "Ingrese el valor de " << nombre_var << ": ";
		cin >> num;
		if (num<1) {
			cout << "El valor de " << nombre_var << " no puede ser menor que 1." << endl;
		}
	} while (num<1);
	return num;
}

int factorial(int num) {
	int fact;
	int i;
	fact = 1;
	for (i=1; i<=num; i++) {
		fact*=i;
	}
	return fact;
}

int main() {
	int n, x, i, pos_terminos;
	float sumatoria;
	sumatoria = 0;
	pos_terminos = 0;

	cout << "Programa que calcula el valor de la sumatoria: " << endl;
	cout << "x^n/n! + x^(n-1)/(n-1)! + x^(n-2)/(n-2)! + ... + x^1/1!" << endl << endl;

	n = ingresar_validar("n");
	x = ingresar_validar("x");

	float terminos[n];

	for (i=n; i>=1; i--) {
		terminos[pos_terminos] = (pow(x,i))/factorial(i);
		pos_terminos++;
	}

	cout << "" << endl;
	cout << "Los terminos de la sucesion son: " << endl;
	for (i=0; i<=n-1; i++) {
		cout << "Termino que ocupa la posicion [" << i << "]: " << terminos[i] << endl;
		sumatoria += terminos[i];
	}
	
	cout << endl;
	cout << "La sumatoria de los terminos de la serie es " << sumatoria << endl;
	cout << endl;
	return 0;
}
