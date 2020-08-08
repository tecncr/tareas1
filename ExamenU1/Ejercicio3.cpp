#include<iostream>
//#include <conio.h> (Libreria para capturar caracter y evitar que se cierre en Windows)
using namespace std;

int main(int argc, char* argv[]) {

	double nota1, nota2, nota3, nota4, promedio;

	cout << "Programa que calcula el promedio de cuatro" << endl;
	cout << "calificaciones e indica la maxima y la minima. \n" << endl;
	cout << "Ingrese la primera calificacion: ";
	cin >> nota1;
	cout << "Ingrese la segunda calificacion: ";
	cin >> nota2;
	cout << "Ingrese la tercera calificacion: ";
	cin >> nota3;
	cout << "Ingrese la cuarta calificacion: ";
	cin >> nota4;

	promedio = (nota1+nota2+nota3+nota4)/4;

	cout << "\nEl promedio del estudiante es: " << promedio << endl;

	if (nota1<=nota2 and nota1<=nota3 and nota1<=nota4) {
		cout << "La calificacion minima es: " << nota1 << endl;
	} else {
		if (nota2<=nota1 and nota2<=nota3 and nota2<=nota4) {
			cout << "La calificacion minima es: " << nota2 << endl;
		} else {
			if (nota3<=nota1 and nota3<=nota2 and nota3<=nota4) {
				cout << "La calificacion minima es: " << nota3 << endl;
			} else {
				cout << "La calificacion minima es: " << nota4 << endl;
			}
		}
	}

	if (nota1>=nota2 and nota1>=nota3 and nota1>=nota4) {
		cout << "La calificacion maxima es: " << nota1 << endl;
	} else {
		if (nota2>=nota1 and nota2>=nota3 and nota2>=nota4) {
			cout << "La calificacion maxima es: " << nota2 << endl;
		} else {
			if (nota3>=nota1 and nota3>=nota2 and nota3>=nota4) {
				cout << "La calificacion maxima es: " << nota3 << endl;
			} else {
				cout << "La calificacion maxima es: " << nota4 << endl;
			}
		}
	}

/*	(Windows)

	cout << "Presione cualquier tecla para salir.";
	getch();

*/
	return 0;
}