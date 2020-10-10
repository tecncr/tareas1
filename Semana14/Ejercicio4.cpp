#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglo(char arreglo[], int tam);
int encontrar_mayor_entero(int arreglo[], int tam);

int ingresar_validar_tam(int t_max, string nombre_arr) {
	int n;
	do {
		cout << "Ingrese la cantidad de elementos del arreglo" << nombre_arr << ": ";
		cin >> n;
		if (n<1) {
			cout << "El arreglo no puede tener menos de 1 elemento" << endl;
		}
		if (n>t_max) {
			cout << "Para evitar desbordamiento se ha limitado la cantidad maxima de elementos a " << t_max << endl;
			cout << "Por favor ingrese una cantidad inferior o igual a " << t_max << endl;
		}
	} while (n<1 || n>t_max);
	return n;
}

void rellenar_arreglo(char arreglo[], int tam) {
	for (int i=0; i<=tam-1; i++) {
		cout << "Ingrese el elemento " << i+1 << " de " << tam << ": ";
		cin >> arreglo[i];
	}
}

int encontrar_mayor_entero(int arreglo[], int tam) {
	int el_mayor = arreglo[0];
	for (int i=0; i<=tam-2; i++) {
		if (arreglo[i+1]>arreglo[i]) {
			el_mayor = arreglo[i+1];
		}
	}
	return el_mayor;
}

int main() {
	int n1, frecuencia, pos_arrf = 0, mayor_cant_frec, coincidencias;
	char moda;
	const int TAM_MAX = 100;

	cout << "Programa que muestra la moda de un arreglo de enteros." << endl << endl;

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
