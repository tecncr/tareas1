#include "iostream"
#include <iomanip> // para redondear
#include <conio.h>
using namespace std;

int main(int argc, char* argv[])
{
	double kw, impuesto, subtotal, total;

	cout << "Programa que calcula el monto a pagar por el consumo de energia electrica." << endl;
	cout << "Ingrese el consumo electrico en kilowatts: ";
	cin >> kw;

	subtotal = kw * 0.5;

	if (subtotal <= 50) {
		impuesto = subtotal * 0.03;
	} else {
		if (subtotal <= 100) {
			impuesto = subtotal * 0.05;
		} else {
			impuesto = subtotal * 0.07;
		}
	}

	total = subtotal + impuesto;

	cout << "El subtotal por la energia consumida es de   S/ " << fixed << setprecision(2) << subtotal << endl;
	cout << "El monto del impuesto es                     S/ " << fixed << setprecision(2) << impuesto << endl;
	cout << "El monto total a pagar es                    S/ " << fixed << setprecision(2) << total << endl;

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}