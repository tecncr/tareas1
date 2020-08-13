#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char* argv[])
{
	string cliente, articulo, mediosdepago;
	int descuento;

	cout << "Programa que muestra los descuentos y medios de pago de acuerdo a la clasificacion del cliente." << endl;
	
	do {

		cout << "Tipos de clientes admitidos: e (Excelente), b (Bueno), r (Regular), m (Malo)." << endl;
		cout << "Ingrese el tipo de cliente: ";
		cin >> cliente;
		
		if (cliente != "e" and cliente != "b" and cliente != "r" and cliente != "m") {
			cout << "El tipo de cliente ingresado es invalido." << endl;
		}

	} while (!(cliente == "e" or cliente == "b" or cliente == "r" or cliente == "m"));


	do {

		cout << "Ingrese el tipo de articulo que desea adquirir (a/b/c): ";
		cin >> articulo;

		if (articulo != "a" and articulo != "b" and articulo != "c") {
			cout << "El articulo ingresado es invalido." << endl;
		}

	} while (!(articulo == "a" or articulo == "b" or articulo == "c"));


	if (cliente == "e") {
		mediosdepago = "efectivo, cheque o al credito.";
		if (articulo == "a") {
			descuento = 40;
		} else {
			if (articulo == "b") {
				descuento = 30;
			} else {
				descuento = 20;
			}
		}
	} else {
		if (cliente == "b") {
			mediosdepago = "efectivo, cheque o al credito.";
			if (articulo == "a") {
				descuento = 30;
			} else {
				if (articulo == "b") {
					descuento = 20;
				} else {
					descuento = 10;
				}
			}
		} else {
			if (cliente == "r") {
				mediosdepago = "efectivo o cheque.";
				if (articulo == "a") {
					descuento = 20;
				} else {
					if (articulo == "b") {
						descuento = 10;
					} else {
						descuento = 0;
					}
				}
			} else {
				if (cliente == "m") {
					mediosdepago = "efectivo solamente.";
					descuento = 0;
				}
			}
		}
	}
	cout << endl << "El cliente de tipo " << cliente << " tiene un descuento del "
	<< descuento << "%" << " en el articulo " << articulo << endl;
	cout << "Y lo puede pagar con " << mediosdepago << endl;
	
	
	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}