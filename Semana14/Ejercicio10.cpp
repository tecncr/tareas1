#include <iostream>
using namespace std;

int ingresar_validar(int max, string nombre_var);

int ingresar_validar(int max, string nombre_var) {
	int num;
	do {
		cout << "Ingrese el valor de " << nombre_var << ": ";
		cin >> num;
		if (max<=num) {
			cout << "El valor de " << nombre_var << " tiene que ser menor que el de n (" << max << ")" << endl;
		}
		if (num<0) {
			cout << "El valor de " << nombre_var << " no puede ser negativo." << endl;
		}
	} while (max<=num || num<0);
	return num;
}

int main() {
	int variables[3];
	float sumatoria = 0;

	cout << "Programa que calcula el valor de la sumatoria: " << endl;
	cout << "a/1 - a+b/2 + a+2b/3 - a+3b/4 + ... + a+nb/n+1" << endl;
	cout << endl;

	do {
		cout << "Ingrese el valor de n: ";
		cin >> variables[2];
		if (variables[2]<0) {
			cout << "Solo se admiten valores enteros positivos." << endl;
		}
	} while (variables[2]<0);

	float terminos[variables[2]];
	variables[0] = ingresar_validar(variables[2],"a");
	variables[1] = ingresar_validar(variables[2],"b");

	cout << endl;
	cout << "Los terminos de la sucesion son: " << endl;

	for (int n=0; n<variables[2]; n++) {
		terminos[n] = (float)(variables[0]+n*variables[1])/(n+1);
		//Haciendo casting a los terminos para que se muestren los decimales correctamente
		if (n%2 > 0) {
			terminos[n] *= (-1);
		}
		cout << terminos[n] << endl;
		sumatoria += terminos[n];
	}

	cout << endl;
	cout << "La sumatoria de los " << variables[2] << " primeros terminos de la serie es " << sumatoria << endl;
	cout << endl;
	return 0;
}
