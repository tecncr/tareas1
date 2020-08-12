#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char * argv[]){

	double ang1, ang2, ang3;

	cout << "Programa que clasifica triangulos en base a la medida de sus angulos internos." << endl;

	do {
		cout << "Ingrese la medida del primer angulo: ";
		cin >> ang1;
		cout << "Ingrese la medida del segundo angulo: ";
		cin >> ang2;
		cout << "Ingrese la medida del tercer angulo: ";
		cin >> ang3;
		if (ang1 + ang2 + ang3 != 180) {
			cout << "La suma de los angulos internos de un triangulo debe ser igual a 180 grados." << endl;
		}
	} while (ang1 + ang2 + ang3 != 180);

	if (ang1 == 90 or ang2 == 90 or ang3 == 90) {
		cout << "El triangulo es rectangulo." << endl;
	} else {
		if (ang1 > 90 or ang2 > 90 or ang3 > 90) {
			cout << "El triangulo es obtusangulo." << endl;
		} else {
			cout << "El triangulo es acutangulo." << endl;
		}
	}

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}
