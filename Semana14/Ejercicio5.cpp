#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglo(int arreglo[], int tam);
void ordenar_arreglo_burbuja(int arreglo[], int tam);

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

void rellenar_arreglo(int arreglo[], int tam) {
	for (int i=0; i<=tam-1; i++) {
		cout << "Ingrese el elemento " << i+1 << " de " << tam << ": ";
		cin >> arreglo[i];
	}
}

void ordenar_arreglo_burbuja(int arreglo[], int tam) {
	for (int i=1;i<=tam-1;i++) {
		for (int j=0;j<=tam-2;j++) {
			if (arreglo[j]>arreglo[j+1]) {
				int temp = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = temp;
			}
		}
	}
}

int main() {
	int n1;
	float mediana;
	const int TAM_MAX = 100;

	cout << "Programa que muestra la mediana de un arreglo de enteros." << endl << endl;
	
	n1 = ingresar_validar_tam(TAM_MAX,"");
	int arr[n1];
	cout << endl << "[RELLENANDO ARREGLO]" << endl;
	rellenar_arreglo(arr,n1);
	
	ordenar_arreglo_burbuja(arr,n1);
	
	if (n1%2==0) {
		mediana = (arr[(n1/2)-1]+arr[n1/2])/2;
	} else {
		mediana = arr[((n1+1)/2)-1];
	}

	cout << endl << "La mediana del arreglo ingresado es: " << mediana << endl;
	return 0;
}
