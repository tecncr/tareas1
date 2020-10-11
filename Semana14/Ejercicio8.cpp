#include <iostream>
#include "misfunciones.h"
using namespace std;

int main() {
	int cont = 0, n, num;
	const int TAM_MAX = 100;

	cout << "Programa que busca un elemento dentro de un arreglo." << endl;
	n = ingresar_validar_tam(TAM_MAX,"");
	int arr[n];
	
	cout << endl;
	cout << "[RELLENANDO ARREGLO]" << endl;
	rellenar_arreglo_entero_pcero(arr,n);
	cout << endl;
	
	cout << "Ingrese el numero que desee buscar en el arreglo: ";
	cin >> num;

	cout << endl;
	for (int i=0; i<=n-1; i++) {
		if (arr[i]==num) {
			cont++;
			cout << "Elemento " << num << " encontrado en la posicion " << i << endl;
		}
	}
	cout << endl;

	switch (cont) {
	case 0:
		cout << "El elemento " << num << " no fue encontrado en el arreglo." << endl;
		break;
	case 1:
		cout << "Se registro " << cont << " aparicion del elemento " << num << " en el arreglo." << endl;
		break;
	default:
		cout << "Se registraron " << cont << " apariciones del elemento " << num << " en el arreglo." << endl;
	}

	cout << endl;

	return 0;
}
