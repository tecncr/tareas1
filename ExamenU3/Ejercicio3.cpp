#include <iostream>
#include <string>
using namespace std;

int ingresar_validar_elim(int max);
int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglos(string arreglo1[], string texto1, float arreglo2[], string texto2, int tam);
void eliminar_alumno(float notas[], string alumnos[], int &tam);
void ordenar_merito(float notas[], string alumnos[], int tam);
void mostrar_alumno_mas_bajo(float notas[], string alumnos[], int tam);
void mostrar_alumnos_bajo_14(float notas[], string alumnos[], int tam);

int ingresar_validar_elim(int max) {
	int n;
	do {
		cout << "Ingrese la posicion del alumno que desea eliminar." << endl;
		cout << "Si no ingresa nada por defecto se eliminara el ultimo alumno." << endl;
		cout << "Posicion: ";
		cin >> n;
		if (n<0) {
			cout << "La posicion no puede ser inferior a 0." << endl;
		}
		if (n>max) {
			cout << "La posicion ingresada excede el numero de elementos del arreglo (" << max << ")." << endl;
		}
	} while (n<0 || n>max);
	return n;
}

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

void rellenar_arreglos(string arreglo1[], string texto1, float arreglo2[], string texto2, int tam) {
	int i;
	for (i=0;i<=tam-1;i++) {
		cout << "Ingrese " << texto1 << i << "]: ";
		cin >> arreglo1[i];
		cout << "Ingrese " << texto2 << i << "]: ";
		cin >> arreglo2[i];
		cout << "" << endl;
	}
}

void eliminar_alumno(float notas[], string alumnos[], int &tam) {
	string alumnos2[tam];
	int elim_pos;
	int i;
	float notas2[tam];
	int temp1;
	string temp2;
	int temp_pos;
	temp_pos = 0;
	elim_pos = ingresar_validar_elim(tam);
	for (i=1;i<=tam-1;i++) {
		if (i!=elim_pos) {
			alumnos2[temp_pos] = alumnos[i];
			notas2[temp_pos] = notas[i];
			temp_pos = temp_pos+1;
		}
	}
	cout << "La lista de alumnos con el alumno eliminado es: " << endl;
	cout << "" << endl;
	for (i=0;i<=temp_pos-1;i++) {
		cout << alumnos2[i] << " con promedio " << notas2[i] << endl;
	}
	cout << "" << endl;
}

void ordenar_merito(float notas[], string alumnos[], int tam) {
	int i;
	int j;
	int temp1;
	string temp2;
	for (i=1;i<=tam-1;i++) {
		for (j=0;j<=tam-2;j++) {
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
	cout << "" << endl;
	cout << "La lista de alumnos por orden de merito (promedio descendiente) es: " << endl;
	cout << "" << endl;
	for (i=0;i<=tam-1;i++) {
		cout << "Posicion [" << i << "]: " << i+1 << "° puesto: " << alumnos[i] << " con promedio " << notas[i] << endl;
	}
	cout << "" << endl;
}

void mostrar_alumno_mas_bajo(float notas[], string alumnos[], int tam) {
	float promedio_menor = notas[0];
	for (int i=0; i<=tam-1; i++) {
		if (notas[i]<promedio_menor) {
			promedio_menor = notas[i];
		}
	}
	for (int i=0; i<=tam-1; i++) {
		if (notas[i]==promedio_menor) {
			cout << "El alumno " << alumnos[i] << " obtuvo el promedio mas bajo (" << promedio_menor << ")." << endl;
		}
	}
}

void mostrar_alumnos_bajo_14(float notas[], string alumnos[], int tam) {
	int i;
	for (i=0;i<=tam-1;i++) {
		if (notas[i]<14) {
			cout << "El alumno " << alumnos[i] << " obtuvo un promedio menor a 14" << endl;
		}
	}
}

int main(){
    int n1; string aaa;
    const int TAM_MAX = 100;

    cout << "Programa que simula un registro de alumnos." << endl << endl;
    n1 = ingresar_validar_tam(TAM_MAX, "");
    float promedios[n1]; string nombres[n1];
    cout << endl;
    cout << "[RELLENANDO ARREGLO]";
    rellenar_arreglos(nombres,"el nombre del alumno que ocupara la posicion [",promedios,"el promedio del alumno que ocupara la posicion [",n1);
    cout << endl;
    cout << "Presione enter para mostrar la lista de alumnos por orden de merito.";
    cout << endl; getline(cin,aaa);

    ordenar_merito(promedios, nombres, n1);
	cout << "Presione enter para mostrar alumno con el promedio mas bajo.";
	cout << endl; getline(cin,aaa);
	
	mostrar_alumno_mas_bajo(promedios, nombres, n1);
	cout << "Presione enter para mostrar alumnos con un promedio bajo 14.";
	cout << endl; getline(cin,aaa);
	
	mostrar_alumnos_bajo_14(promedios, nombres, n1);
	cout << "Presione enter para eliminar un alumno.";
	cout << endl; getline(cin,aaa);
	
	eliminar_alumno(promedios, nombres, n1);
	
	cout << "Hasta luego.";
	
}
