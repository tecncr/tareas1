#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglo_entero_pcero(int arreglo[], float tam);

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

void rellenar_arreglo_entero_pcero(int arreglo[], float tam) {
	int i;
	for (i=0;i<=tam-1;i++) {
		cout << "Ingrese el elemento que ocupara la posicion " << i << ": ";
		cin >> arreglo[i];
	}
}

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
