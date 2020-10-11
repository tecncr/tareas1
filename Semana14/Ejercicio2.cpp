#include <iostream>
#include "misfunciones.h"
using namespace std;

int main() {
	int n1, n2, coincidencias, cont_arr_c = 0, i, j, k;
	const int TAM_MAX = 100;

	cout << "Programa que muestra los elementos que pertenecen a un arreglo A" << endl;
	cout << "pero que no pertenecen a un arreglo B." << endl << endl;
	
	n1 = ingresar_validar_tam(TAM_MAX," A");
	int a[n1], c[n1];
	limpiar_pantalla();
	cout << "[RELLENANDO ARREGLO A]" << endl;
	rellenar_arreglo_enteros(a,n1);
	limpiar_pantalla();

	n2 = ingresar_validar_tam(TAM_MAX," B");
	int b[n2];
	limpiar_pantalla();
	cout << "[RELLENANDO ARREGLO B]" << endl;
	rellenar_arreglo_enteros(b,n2);
	limpiar_pantalla();


	for (i=0; i<=n1-1; i++) {
		coincidencias = 0;
		for (j=0; j<=n2-1; j++) {
			if (a[i]==b[j]) {
				coincidencias++;
			}
		}
		if (coincidencias==0) {
			c[cont_arr_c] = a[i];
			cont_arr_c++;
		}
	}
	cout << "Los numeros del arreglo C (que pertenecen a A pero no pertenecen a B) son: " << endl;
	for (k=0; k<=cont_arr_c-1; k++) {
		cout << c[k] << ", ";
	}
	cout << " fin del arreglo C." << endl << endl;
	return 0;
}
