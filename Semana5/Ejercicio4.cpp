#include "iostream"
#include <iomanip> //Para poder redondear
#include <conio.h>
using namespace std;

int main(int argc, char * argv[]){

	int cantidad;
	double precioUnit, subtotal, descuento, montoTotal;

	cout << "Programa que calcula el monto final de una compra." << endl;
	cout << "Ingrese el precio unitario del producto: S/ ";
	cin >> precioUnit;
	cout << "Ingrese la cantidad de productos que va a llevar: ";
	cin >> cantidad;

	subtotal = precioUnit * cantidad;

	if (subtotal <= 75) {
		descuento = subtotal * 0.05;
	} else {
		if (subtotal < 150) {
			descuento = subtotal * 0.1;
		} else {
			descuento = subtotal * 0.15;
		}
	}

	montoTotal = subtotal - descuento;

	cout << endl << "El monto de la compra es: S/ " << fixed << setprecision(2) << subtotal << endl;
	cout << "Tiene un descuento de S/ " << fixed << setprecision(2) << descuento << endl;
	cout << "El monto final a pagar es de: S/ " << fixed << setprecision(2) << montoTotal << endl;

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}