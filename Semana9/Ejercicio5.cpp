#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar_positivo(string var_name) {
	int num;
	do {
		cout << "Ingrese el valor de " << var_name << ": ";
		cin >> num;
		if (num<0) {
			cout << "El valor de " << var_name << " no puede ser negativo." << endl;
			cout << "Intentelo nuevamente." << endl;
		}
	} while (num<0);
	return num;
}

int obtener_inverso(int num) {

	int a, inverso, res;

	a = num;
	inverso = 0;

	while (a>0) {
		res = a%10;
		inverso = inverso*10+res;
		a = int(a/10);
	}
	return inverso;
}

int main(int argc, char * argv[]){

	int a, b, n, np_linea = 0;

	cout << "Programa que muestra los numeros capicuas entre a y b." << endl;
	a = ingresar_validar_positivo("a");
	b = ingresar_validar_positivo("b");

	cout << "Los numeros capicuas entre " << a << " y " << b << " son:" << endl;

	for (n=a; n<=b; n++) {
		if (n==obtener_inverso(n)) {
			cout << n << ", ";
			// Insertando salto de linea cada 8 numeros
			// para una correcta visualizacion
			np_linea = np_linea+1;
			if (np_linea==8) {
				cout << "" << endl;
				np_linea = 0;
			}
		}
	}
	cout << "fin de los resultados." << endl;

	return 0;
}
