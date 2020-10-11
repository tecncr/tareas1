#include <iostream>
#include "misfunciones.h"
using namespace std;

int main() {
	int n1;
	float mediana;
	const int TAM_MAX = 100;

	cout << "Programa que muestra la mediana de un arreglo de enteros." << endl << endl;
	
	n1 = ingresar_validar_tam(TAM_MAX,"");
	int arr[n1];
	cout << endl << "[RELLENANDO ARREGLO]" << endl;
	rellenar_arreglo_enteros(arr,n1);

	ordenar_arreglo_burbuja(arr,n1);
	
	if (n1%2==0) {
		mediana = (float)(arr[(n1/2)-1]+arr[n1/2])/2;
	} else {
		mediana = (float)arr[((n1+1)/2)-1];
	}

	cout << endl << "La mediana del arreglo ingresado es: " << mediana << endl << endl;
	return 0;
}
