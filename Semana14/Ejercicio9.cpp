#include <iostream>
#include "misfunciones.h"
using namespace std;

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
