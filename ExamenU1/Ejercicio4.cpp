#include "iostream"
#include <iomanip> //Para poder redondear
//#include <conio.h> (Libreria para capturar caracter y evitar que se cierre en Windows)

using namespace std;

int main(int argc, char* argv[]) {

	double precioU, porcDescuento, montoDescuento, montoFinal;
	int cantidad;
	string origen, talla; /* Los defini como cadena para evitar errores
	en caso el usuario ingrese mas de un caracter */

	cout << "Programa que calcula el monto final de un pedido en esta distribuidora de ropa." << endl;
	cout << "Ingrese el origen de la prenda (n para nacional, i para importada): ";
	cin >> origen;
	
	//Validacion de entradas del usuario
	while ((origen != "n") and (origen != "i")) {
		cout << "El origen ingresado no es valido." << endl;
		cout << "Ingrese el origen (n/i): ";
		cin >> origen;
	}
	cout << "Ingrese la talla (s/m/l): ";
	cin >> talla;
	
	while (talla != "s" and talla != "m" and talla != "l") {
		cout << "La talla ingresada no es valida." << endl;
		cout << "Ingrese la talla (s/m/l): ";
		cin >> talla;
	}

	cout << "Ingrese la cantidad de prendas adquiridas: ";
	cin >> cantidad;
	cout << "Ingrese el precio de cada prenda: S/ ";
	cin >> precioU;

	if (origen == "n") {
		if (talla == "s") {
			porcDescuento = 0.1;
		} else {
			if (talla == "m") {
				porcDescuento = 0.12;
			} else {
				if (talla == "l") {
					porcDescuento = 0.15;
				}
			}
		}
	} else {
		if (origen == "i") {
			if (talla == "s") {
				porcDescuento = 0.05;
			} else {
				if (talla == "m") {
					porcDescuento = 0.07;
				} else {
					if (talla == "l") {
						porcDescuento = 0.1;
					}
				}
			}
		}
	}
	montoDescuento = (precioU*cantidad)*porcDescuento;
	montoFinal = (precioU*cantidad)-montoDescuento;

	cout << "El monto final a pagar es: S/ " << fixed << setprecision(2) << montoFinal << endl;

/*	(Windows)

	cout << "Presione cualquier tecla para salir.";
	getch();

*/
	return 0;
}