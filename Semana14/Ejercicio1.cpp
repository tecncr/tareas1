#include <iostream>
#include "misfunciones.h"
using namespace std;

int main() {
	int cant;
	const int TAM_MAX = 100;
	
    cout << "Programa que muestra el mayor y menor elemento de un arreglo de caracteres" << endl;
	cant = ingresar_validar_tam(TAM_MAX, "");
    
    char arr[cant];
	rellenar_arreglo(arr,cant);
	
    cout << "El mayor elemento del arreglo es: " << encontrar_mayor(arr,cant) << endl;
	cout << "El menor elemento del arreglo es: " << encontrar_menor(arr,cant) << endl;
	
    return 0;
}
