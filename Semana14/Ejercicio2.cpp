#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglo(int arreglo[], int tam);
void limpiar_pantalla();

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

void limpiar_pantalla() {
	#ifdef _WIN32
		system("CLS"); //Limpiar pantalla en Windows
	#else
		system("clear"); //Limpiar pantalla en Linux
	#endif
}

int main() {
	int n1, n2, coincidencias, cont_arr_c = 0, i, j, k;
	const int TAM_MAX = 100;

	cout << "Programa que muestra los elementos que pertenecen a un arreglo A" << endl;
	cout << "pero que no pertenecen a un arreglo B." << endl << endl;
	
	n1 = ingresar_validar_tam(TAM_MAX," A");
	int a[n1], c[n1];
	limpiar_pantalla();
	cout << "[RELLENANDO ARREGLO A]" << endl;
	rellenar_arreglo(a,n1);
	limpiar_pantalla();

	n2 = ingresar_validar_tam(TAM_MAX," B");
	int b[n2];
	limpiar_pantalla();
	cout << "[RELLENANDO ARREGLO B]" << endl;
	rellenar_arreglo(b,n2);
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
