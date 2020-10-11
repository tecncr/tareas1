#include <iostream>
#include "misfunciones.h"
using namespace std;

int main() {
	int n1, frecuencia, pos_arrf = 0, mayor_cant_frec, coincidencias;
	char moda;
	const int TAM_MAX = 100;

	cout << "Programa que muestra la moda de un arreglo." << endl << endl;

	n1 = ingresar_validar_tam(TAM_MAX,"");
	char arr[n1]; int arr_frec[n1];
	cout << endl << "[RELLENANDO ARREGLO]" << endl;
	rellenar_arreglo(arr,n1);
	
	for (int i=0; i<=n1-1; i++) {
		coincidencias = 0;
		for (int j=0; j<=n1-1; j++) {
			if (arr[i]==arr[j]) {
				coincidencias++;
			}
		}
		arr_frec[pos_arrf] = coincidencias;
		pos_arrf++;
	}
	
	mayor_cant_frec = encontrar_mayor_entero(arr_frec,pos_arrf);
	
	for (int i=0; i<=pos_arrf-1; i++) {
		if (arr_frec[i]==mayor_cant_frec) {
			moda = arr[i];
		}
	}
	
	cout << endl << "La moda de este arreglo es " << moda << endl << endl;
	return 0;
}
