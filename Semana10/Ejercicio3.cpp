#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar(string nombre_var) {
	int num;
	do {
		cout << "Ingrese el valor de " << nombre_var << ": ";
		cin >> num;
		if (num<0) {
			cout << "El valor de " << nombre_var << " no puede ser negativo." << endl;
		}
	} while (num<0);
	return num;
}

int main(int argc, char * argv[]){

	long long int fact_n;
	int n, n_max, x;
	float sumatoria, termino;

	sumatoria = 0;

	cout << "Programa que calcula el valor de la sumatoria: " << endl;
	cout << "1 + x + x^2/2! + x^3/3! + x^4/4! + ... + x^n/n!" << endl;
	cout << "" << endl;

	x = ingresar_validar("x");
	n_max = ingresar_validar("n (numero de terminos)");
	
	for (n=1; n<=n_max; n++) {
		termino = (2*pow(x,n))/(n+1);
		sumatoria += termino;
	}

	cout << endl << "La sumatoria de la serie es: " << sumatoria << endl;
	
	return 0;
}
