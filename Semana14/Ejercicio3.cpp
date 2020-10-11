#include <iostream>
#include "misfunciones.h"
using namespace std;

int main() {
	int n1, coincidencias = 0;
	char elemento;
	const int TAM_MAX = 100;

	cout << "Programa que muestra la cantidad de veces que un elemento aparece" << endl;
	cout << "dentro de un arreglo." << endl << endl;

	n1 = ingresar_validar_tam(TAM_MAX,"");
	char arr[n1];
	cout << "[RELLENANDO ARREGLO]" << endl;
	rellenar_arreglo(arr,n1);

	cout << endl << "Ingrese el elemento que desea buscar en el arreglo: ";
	cin >> elemento;

	for (int i=0;i<=n1-1;i++) {
		if (arr[i]==elemento) {
			coincidencias = coincidencias+1;
		}
	}

	cout << endl << "El elemento " << elemento << " aparece " << coincidencias
	<< " veces en el arreglo." << endl << endl;
	return 0;
}
