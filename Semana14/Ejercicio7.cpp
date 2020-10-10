#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglo_enteros(int arreglo[], float tam);

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

void rellenar_arreglo_enteros(int arreglo[], float tam) {
	for (int i=0; i<=tam-1; i++) {
		cout << "Ingrese el elemento " << i+1 << " de " << tam << ": ";
		cin >> arreglo[i];
	}
}

int main() {
	int n, num, pos_coinc;
	bool ya_eliminado = false;
	const int TAM_MAX = 100;
	
	cout << "Programa que elimina la ultima coincidencia de un numero dado en un arreglo.\n";
	n = ingresar_validar_tam(TAM_MAX,"");
	
	int arr[n], arr_final[n];
	pos_coinc = n-1;
	arr_final[0] = 0;
	
	cout << "\n[RELLENANDO ARREGLO]" << endl;
	rellenar_arreglo_enteros(arr,n);
	
	cout << "Ingrese el numero que desee eliminar del arreglo: ";
	cin >> num;
	
	for (int i=n-1; i>=0; i--) {
		if (ya_eliminado==false) {
			if (arr[i]==num) {
				ya_eliminado = true;
			} else {
				arr_final[pos_coinc] = arr[i];
				pos_coinc--;
			}
		} else {
			arr_final[pos_coinc] = arr[i];
			pos_coinc--;
		}
	}

	cout << endl;

	if (ya_eliminado==false) {
		cout << "El numero " << num << " no fue encontrado en el arreglo." << endl;
		cout << "Ningun dato fue eliminado." << endl;
	} else {
		cout << "La ultima coincidencia de " << num << " fue eliminada del arreglo." << endl;
		cout << "El arreglo actual contiene los siguientes elementos: " << endl;
		for (int i=1; i<=n-1; i++) {
			cout << "\t \t \t" << arr_final[i] << endl;
		}
	}

	cout << endl;

	return 0;
}
