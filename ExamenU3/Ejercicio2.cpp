#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max);
void rellenar_arreglo(char arreglo[], float tam);

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

void rellenar_arreglo(char arreglo[], float tam) {
	int i;
	for (i=0; i<=tam-1; i++) {
		cout << "Ingrese el elemento " << i+1 << " de " << tam << ": ";
		cin >> arreglo[i];
	}
}

int main() {
	int n, i, pos_arrf, eliminaciones;
	char elem;
	const int TAM_MAX = 100;
	eliminaciones = 0;
	pos_arrf = 0;

	cout << "Programa que elimina un elemento dado en un arreglo." << endl;
	
	n = ingresar_validar_tam(TAM_MAX);
	char arr[n], arr_final[n];
	cout << "" << endl;
	cout << "[RELLENANDO ARREGLO]" << endl;
	rellenar_arreglo(arr,n);
	
	cout << endl << "Ingrese el elemento que desee eliminar del arreglo: ";
	cin >> elem;
	
	for (i=0; i<=n-1; i++) {
		if (arr[i]!=elem) {
			arr_final[pos_arrf] = arr[i];
			pos_arrf++;
		} else {
			eliminaciones++;
		}
	}
	cout << endl;
	
	if (eliminaciones==0) {
		cout << "El valor " << elem << " no fue encontrado en el arreglo." << endl;
		cout << "Ningun dato fue eliminado. El arreglo se mantiene igual." << endl;
	} else {
		cout << "Se eliminaron " << eliminaciones << " coincidencias de " << elem << " en el arreglo." << endl;
		cout << "El arreglo actual contiene los siguientes " << pos_arrf << " elementos: " << endl;
		for (i=0; i<=pos_arrf-1; i++) {
			cout << arr_final[i] << endl;
		}
	}
	return 0;
}
