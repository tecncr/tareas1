#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar(int max, string nombre_var) {
	int num;
	do {
		cout << "Ingrese el valor de " << nombre_var << ": ";
		cin >> num;
		if (max<=num) {
			cout << "El valor de " << nombre_var << " tiene que ser menor que " << max << endl;
		}
		if (num<0) {
			cout << "El valor de " << nombre_var << " no puede ser negativo." << endl;
		}
	} while (max<=num || num<0);
	return num;
}

int factorial(float num) {
	int fact = 1, i;
	for (i=1;i<=num;i++) {
		fact *= i;
	}
	return fact;
}

int main(int argc, char * argv[]){

	long long int fact_n;
	int n, n_max, x;
	float sumatoria, termino;

	// Se inicia en 1 porque el primer termino siempre es 1
	sumatoria = 1;

	cout << "Programa que calcula el valor de la sumatoria: " << endl;
	cout << "1 + x + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!" << endl;
	cout << "" << endl;

	x = ingresar_validar(10000000000,"x");
	n_max = ingresar_validar(50,"n (numero de terminos)");

	for (n=1; n<=n_max; n++) {
		termino = (pow(x,n))/factorial(n);
		sumatoria += termino;
	}

	cout << endl << "La sumatoria de la serie es: " << sumatoria << endl;
	return 0;
}
