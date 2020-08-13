#include "iostream"
#include <iomanip> // para redondear
#include <conio.h>
using namespace std;

int main(int argc, char* argv[])
{
	double ingreso, porcImpuestos, impuestos;

	cout << "Programa que calcula el monto de los impuestos por ingresos." << endl;
	cout << "Escriba el monto de su ingreso: S/ ";
	cin >> ingreso;

	if (ingreso < 4000) {
		porcImpuestos = 0;
	} else {
		if (ingreso < 29000) {
			porcImpuestos = 0.15;
		} else {
			if (ingreso <= 70000) {
				porcImpuestos = 0.25;
			} else {
				porcImpuestos = 0.35;
			}
		}
	}

	impuestos = ingreso * porcImpuestos;
	
	cout << endl << "Su ingreso esta sujeto a impuestos del " << porcImpuestos * 100 << "%" << endl;
	cout << "Equivalentes a un monto de S/ " << fixed << setprecision(2) << impuestos << endl;
	cout << "Su ingreso despues del pago de los impuestos sera de S/ "
	<< fixed << setprecision(2) << ingreso - impuestos << endl;
	
	
	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}