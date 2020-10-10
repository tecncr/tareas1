#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglo(char arreglo[], float tam);

int ingresar_validar_tam(int t_max, string nombre_arr) {
	int n;
	do {
		cout << "Ingrese la cantidad de elementos del arreglo" << nombre_arr << ": ";
		cin >> n;
		if (n<1) {
			cout << "El arreglo no puede tener menos de 1 elemento" << endl;
		}
		if (n>t_max) {
			cout << "Para evitar desbordamiento se ha limitado la cantidad maxima de elementos a "
			<< t_max << endl;
			cout << "Por favor ingrese una cantidad inferior o igual a " << t_max << endl;
		}
	} while (n<1 || n>t_max);
	return n;
}

void rellenar_arreglo(char arreglo[], float tam) {
	for (int i=0;i<=tam-1;i++) {
		cout << "Ingrese el elemento " << i+1 << " de " << tam << ": ";
		cin >> arreglo[i];
	}
}

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
