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
	int fact, i;
	fact = 1;
	for (i=1; i<=num; i++) {
		fact *= i;
	}
	return fact;
}

int main(int argc, char * argv[]){
	long long int fact_n, n, n_max, x;
	//declaradas como long para evitar desbordamientos con pocas cifras
	double sumatoria, termino;

	cout << endl << "Programa que calcula el valor de la sumatoria de la serie: " << endl;
	cout << "1 + x + 2!/x^2 + 3!/x^3 + 4!/x^4 + ... + n!/x^n" << endl << endl;
	x = ingresar_validar(10000000000,"x");

	// Iniciada en 1+x por los primeros terminos
	sumatoria = 1+x;

	n_max = ingresar_validar(45,"n (numero de terminos)");

	for (n=2; n<=n_max; n++) {
		termino = factorial(n)/(pow(x,n));
		sumatoria += termino;
	}
	cout << endl;
	cout << "La sumatoria de la serie es: " << sumatoria << endl << endl;
	return 0;
}
