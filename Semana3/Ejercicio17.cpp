#include "iostream"
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){	
    int n, suma;

	cout << "Programa que calcula la suma de los primeros N numeros." << endl;
	cout << "Ingrese el valor de N: ";
	cin >> n;

	suma = n * (n+1)/2;
	
	cout << "La suma de todos los numeros naturales hasta " << n << " es " << suma << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}