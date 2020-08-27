#include "iostream"
using namespace std;

int main(int argc, char* argv[]){

	char cliente, articulo;
	string mediosdepago;
	int descuento;

	cout << "Programa que muestra los descuentos y medios de pago de acuerdo a la clasificacion del cliente." << endl;
	
	do {
		cout << "Tipos de clientes admitidos: e (Excelente), b (Bueno), r (Regular), m (Malo)." << endl;
		cout << "Ingrese el tipo de cliente: ";
		cin >> cliente;
		if (cliente != 'e' and cliente != 'b' and cliente != 'r' and cliente != 'm') {
			cout << "El tipo de cliente ingresado es invalido." << endl;
		}
	} while (cliente != 'e' and cliente != 'b' and cliente != 'r' and cliente != 'm');
	
	do {
		cout << "Ingrese el tipo de articulo que desea adquirir (a/b/c): ";
		cin >> articulo;
		if (articulo != 'a' and articulo != 'b' and articulo != 'c') {
			cout << "El articulo ingresado es invalido." << endl;
		}
	} while (articulo != 'a' and articulo != 'b' and articulo != 'c');
	
	switch (cliente) {
	case 'e':
		switch (articulo) {
		case 'a': descuento = 40;
			      break;
		case 'b': descuento = 30;
			      break;
		case 'c': descuento = 20;
			      break;
		}
		mediosdepago = "efectivo, cheque o al credito.";
		break;
	case 'b':
		switch (articulo) {
		case 'a': descuento = 30;
			      break;
		case 'b': descuento = 20;
			      break;
		case 'c': descuento = 10;
			      break;
		}
		mediosdepago = "efectivo, cheque o al credito.";
		break;
	case 'r':
		switch (articulo) {
		case 'a': descuento = 20;
			      break;
		case 'b': descuento = 10;
			      break;
		case 'c': descuento = 0;
			      break;
		}
		mediosdepago = "efectivo o cheque.";
		break;
	case 'm':
		descuento = 0;
		mediosdepago = "efectivo solamente.";
		break;
	}
	
	cout << endl << "El cliente de tipo " << cliente << " tiene un descuento del "
	<< descuento << "%" << " en el articulo " << articulo << endl;
	cout << "Y lo puede pagar con " << mediosdepago << endl;
	
	return 0;
}