#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar(string nombre_var) {
	int num;
	do {
		cout << "Ingrese l" << nombre_var << ": ";
		cin >> num;
		if (num<0) {
			cout << "L" << nombre_var << " no puede ser negativa." << endl;
			cout << "Intentelo nuevamente." << endl;
		}
	} while (num<0);
	return num;
}

void imprimir_serie(float num) {

	int a, denom, np_linea;
	np_linea = 0;

	for (a=1;a<=num;a++) {
		denom = (a*(a+1)/2)*4;
		cout << "1/" << denom << ",";
		// Salto de linea cada 8 terminos para visualizacion correcta
		np_linea = np_linea+1;
		if (np_linea==8) {
			cout << "" << endl;
			np_linea = 0;
		}
	}
	cout << " fin de la serie.";
	cout << endl;
}

int main(int argc, char * argv[]){
	int n;
	cout << "Programa que imprime terminos de la serie 1/4, 1/12, 1/24, 1/40, 1/60, ..." << endl;
	n = ingresar_validar("a cantidad de terminos que desee imprimir");
	cout << "Los teminos de la serie son: " << endl;
	imprimir_serie(n);
	return 0;
}
