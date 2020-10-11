/*Archivo de cabecera que contiene las funciones que se utilizaran a lo largo del desarrollo
de la tarea. Esta lleno de malas practicas debido a que es mi primer archivo de cabecera :) */

#include <iostream>
using namespace std;

int ingresar_validar_tam(int t_max, string nombre_arr);
void rellenar_arreglo(char arreglo[], int tam);
char encontrar_mayor(char arreglo[], int tam);
char encontrar_menor(char arreglo[], int tam);
void rellenar_arreglo_enteros(int arreglo[], int tam);
void limpiar_pantalla();
int encontrar_mayor_entero(int arreglo[], int tam);
void ordenar_arreglo_burbuja(int arreglo[], int tam);
void rellenar_arreglo_entero_pcero(int arreglo[], float tam);
void rellenar_arreglos_merito(string arreglo1[], string texto1, float arreglo2[], string texto2, int tam);
void ordenar_merito(float notas[], string alumnos[], int tam);
int ingresar_validar(int max, string nombre_var);

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

void rellenar_arreglo(char arreglo[], int tam) {
	for (int i=0;i<=tam-1;i++) {
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

void rellenar_arreglo_enteros(int arreglo[], int tam) {
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

int encontrar_mayor_entero(int arreglo[], int tam) {
	int el_mayor = arreglo[0];
	for (int i=0; i<=tam-2; i++) {
		if (arreglo[i+1]>arreglo[i]) {
			el_mayor = arreglo[i+1];
		}
	}
	return el_mayor;
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

void rellenar_arreglo_entero_pcero(int arreglo[], float tam) {
	int i;
	for (i=0;i<=tam-1;i++) {
		cout << "Ingrese el elemento que ocupara la posicion " << i << ": ";
		cin >> arreglo[i];
	}
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

int ingresar_validar(int max, string nombre_var) {
	int num;
	do {
		cout << "Ingrese el valor de " << nombre_var << ": ";
		cin >> num;
		if (max<=num) {
			cout << "El valor de " << nombre_var << " tiene que ser menor que el de n (" << max << ")" << endl;
		}
		if (num<0) {
			cout << "El valor de " << nombre_var << " no puede ser negativo." << endl;
		}
	} while (max<=num || num<0);
	return num;
}
