#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar(string nombre_var, string max_string, int max) {
	int num;
	do {
		cout << "Ingrese el valor de " << nombre_var << ": ";
		cin >> num;
		if (max<=num) {
			cout << "El valor de " << nombre_var << " tiene que ser menor que " << max_string << max << endl;
			cout << "Intentelo nuevamente." << endl;
		}
		if (num<0) {
			cout << "El valor de " << nombre_var << " no puede ser negativo." << endl;
			cout << "Intentelo nuevamente." << endl;
		}
	} while (max<=num || num<0);
	return num;
}

int factorial(float num) {
	long long int fact;
	int i;
	fact = 1;
	for (i=1;i<=num;i++) {
		fact *= i;
	}
	return fact;
}

int main(int argc, char * argv[]){
	
	int a, b;
	long int n, n_max;
	float sumatoria, termino;
	
	sumatoria = 0;
	
	cout << "Programa que calcula el valor de la sumatoria: " << endl;
	cout << "a/1 - a+b/2 + a+2b/3 - a+3b/4 + ... + a+nb/n+1" << endl << endl;
	
	n_max = ingresar_validar("N","",100);
	a = ingresar_validar("A","el de N: ",n_max);
	b = ingresar_validar("B","el de N: ",n_max);
	
	for (n=0; n<=n_max; n++) {
		termino = factorial(n+1)/(a+n*b);
		if (n%2 > 0) {
			termino *= (-1);
		}
		sumatoria += termino;
	}
	
	cout << endl << "La sumatoria de los " << n_max << " primeros terminos de la serie es " << sumatoria << endl;
	
	return 0;
}
