#include "iostream"
#include <conio.h>
#include <iomanip> //para poder redondear
using namespace std;

int main(int argc, char * argv[]){

	double sBasico, aServicio, incentivoTs, incentivoCondicion, iTotal;
	string condicion; //declarado como cadena para evitar errores de entrada del usuario

	cout << "Programa que calcula el incentivo de un trabajador." << endl;
	cout << "Ingrese el sueldo basico del trabajador: ";
	cin >> sBasico;
	cout << "Ingrese las unidades anuales de tiempo de servicio: ";
	cin >> aServicio;

	do {
		cout << "Ingrese la condicion del trabajador (c para contratado, e para estable): ";
		cin >> condicion;
		if (condicion != "c" and condicion != "e") {
			cout << "La condicion ingresada no es valida." << endl;
		}
	} while (!(condicion == "c" or condicion == "e"));

	if (aServicio <= 3) {
		incentivoTs = sBasico * 0.05;
		if (condicion == "c") {
			incentivoCondicion = 200;
		} else {
			incentivoCondicion = 400;
		}
	} else {
		incentivoTs = sBasico * 0.07;
		if (condicion == "c") {
			incentivoCondicion = 200;
		} else {
			incentivoCondicion = 400;
		}
	}

	iTotal = incentivoTs + incentivoCondicion;

	cout << endl << "El incentivo por tiempo de servicio es de  S/ " <<
	fixed << setprecision(2) << incentivoTs << endl;
	cout << "El incentivo por condicion es de           S/ " <<
	fixed << setprecision(2) << incentivoCondicion << endl;
	cout << "El incentivo total es de                   S/ " <<
	fixed << setprecision(2) << iTotal << endl;
	cout << "El sueldo total del trabajador es de       S/ " <<
	fixed << setprecision(2) << sBasico + iTotal << endl;

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}