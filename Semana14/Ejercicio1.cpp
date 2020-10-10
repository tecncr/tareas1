#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max);
void rellenar_arreglo(char arreglo[], int tam);
char encontrar_mayor(char arreglo[], int tam);
char encontrar_menor(char arreglo[], int tam);

int ingresar_validar_tam(int t_max) {
	int n;
	do {
		cout << "Ingrese la cantidad de elementos del arreglo: ";
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

char encontrar_mayor(char arreglo[], int tam) {
	char el_mayor = arreglo[0];
	for (int i=0; i<=tam-2; i++) {
		if (arreglo[i+1] > arreglo[i]) {
			el_mayor = arreglo[i+1];
		}
	}
	return el_mayor;
}

char encontrar_menor(char arreglo[], int tam) {
	char el_menor = arreglo[0];
	for (int i=0; i<=tam-2; i++) {
		if (arreglo[i+1] < arreglo[i]) {
			el_menor = arreglo[i+1];
		}
	}
	return el_menor;
}

int main() {
	int cant;
	const int TAM_MAX = 100;
	
    cout << "Programa que muestra el mayor y menor elemento de un arreglo de caracteres" << endl;
	cant = ingresar_validar_tam(TAM_MAX);
    
    char arr[cant];
	rellenar_arreglo(arr,cant);
	
    cout << "El mayor elemento del arreglo es: " << encontrar_mayor(arr,cant) << endl;
	cout << "El menor elemento del arreglo es: " << encontrar_menor(arr,cant) << endl;
	
    return 0;
}
