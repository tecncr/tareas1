#include "iostream"

using namespace std;

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

int main(int argc, char * argv[]){

	int a, b, n, n_max;
	double sumatoria = 0, termino;

	cout << "Programa que calcula el valor de la sumatoria: " << endl;
	cout << "a/1 - a+b/2 + a+2b/3 - a+3b/4 + ... + a+nb/n+1" << endl << endl;
	
	do {
		cout << "Ingrese el valor de n: ";
		cin >> n_max;
		if (n_max<0) {
			cout << "Solo se admiten valores enteros positivos." << endl;
		}
	} while (n_max<0);

	a = ingresar_validar(n_max,"a");
	b = ingresar_validar(n_max,"b");

	for (n=0;n<=n_max;n++) {
		termino = (a+n*b)/(n+1);
		if (n%2>0) {
			termino = termino*(-1);
		}
		sumatoria = sumatoria+termino;
	}
	
	cout << "" << endl;
	cout << "La sumatoria de los " << n_max << " primeros terminos de la serie es " << sumatoria << endl;
	
	return 0;
}
