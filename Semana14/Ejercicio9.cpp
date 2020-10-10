#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglos_merito(string arreglo1[], string texto1, float arreglo2[], string texto2, int tam);
void ordenar_merito(float notas[], string alumnos[], int tam);

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

void rellenar_arreglos_merito(string arreglo1[], string texto1, float arreglo2[], string texto2, int tam) {
	for (int i=0; i<=tam-1; i++) {
		cout << "Ingrese " << texto1 << " " << i+1 << ": ";
		cin >> arreglo1[i];
		cout << "Ingrese " << texto2 << " " << i+1 << ": ";
		cin >> arreglo2[i];
		cout << endl;
	}
}

void ordenar_merito(float notas[], string alumnos[], int tam) {
	int temp1; string temp2;
	for (int i=1; i<=tam-1; i++) {
		for (int j=0; j<=tam-2; j++) {
			if (notas[j]<notas[j+1]) {
				temp1 = notas[j];
				temp2 = alumnos[j];
				notas[j] = notas[j+1];
				alumnos[j] = alumnos[j+1];
				notas[j+1] = temp1;
				alumnos[j+1] = temp2;
			}
		}
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
	int n1;
	const int TAM_MAX = 100;

	cout << "Programa que muestra el orden de merito por promedios." << endl;
	cout << "de una lista de alumnos." << endl << endl;
	
	n1 = ingresar_validar_tam(TAM_MAX,"");
	float promedios[n1]; string nombres[n1];
	limpiar_pantalla();

	cout << "[RELLENANDO ARREGLO]" << endl;
	rellenar_arreglos_merito(nombres,"el nombre del alumno",promedios,"el promedio del alumno",n1);
	limpiar_pantalla();

	ordenar_merito(promedios,nombres,n1);

	cout << endl;
	cout << "La lista de alumnos por orden de merito es: " << endl;
	cout << endl;

	for (int i=0;i<=n1-1;i++) {
		cout << "Puesto " << i+1 << ": " << nombres[i] << " con promedio " << promedios[i] << endl;
	}

	cout << endl;

	return 0;
}
