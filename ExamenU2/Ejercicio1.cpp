#include "iostream"
using namespace std;

char obtener_tcliente(char t1, char t2, char t3, string desc1, string desc2, string desc3) {
	char t_cliente;
	do {
		cout << "Tipos de clientes admitidos: " << t1 << " (" << desc1 << "), " << t2 << " (" << desc2 << "), " << t3 << " (" << desc3 << "), " << endl;
		cout << "Ingrese el tipo de cliente: ";
		cin >> t_cliente;
		if (t_cliente!=t1 && t_cliente!=t2 && t_cliente!=t3) {
			cout << endl << "El tipo de cliente ingresado es invalido." << endl;
		}
	} while (t_cliente!=t1 && t_cliente!=t2 && t_cliente!=t3);
	return t_cliente;
}

char obtener_articulo(char a1, char a2, char a3, char a4) {
	char t_articulo;
	do {
		cout << "Ingrese el tipo de articulo que desea adquirir (" << a1 << "/" << a2 << "/" << a3 << "/" << a4 << "): ";
		cin >> t_articulo;
		if (t_articulo!=a1 && t_articulo!=a2 && t_articulo!=a3 && t_articulo!=a4) {
			cout << endl << "El articulo ingresado es invalido." << endl << endl;
		}
	} while (t_articulo!=a1 && t_articulo!=a2 && t_articulo!=a3 && t_articulo!=a4);
	return t_articulo;
}

int main() {
	char articulo, cliente;
	int descuento;
	string mediosdepago, tipo;

	cout << "Programa que muestra los descuentos y medios de pago de acuerdo" << endl;
	cout << "a la clasificacion del cliente." << endl;
	cliente = obtener_tcliente('e','b','m',"Excelente","Bueno","Malo");
	cout << endl;
	articulo = obtener_articulo('a','b','c','d');
	
	switch (cliente) {
	case 'e':
		switch (articulo) {
		case 'a':
			descuento = 50;
			break;
		case 'b':
			descuento = 40;
			break;
		case 'c':
			descuento = 20;
			break;
		case 'd':
			descuento = 10;
			break;
		}
		mediosdepago = "efectivo, cheque o al crédito.";
		tipo = "excelente";
		break;
	case 'b':
		switch (articulo) {
		case 'a':
			descuento = 25;
			break;
		case 'b':
			descuento = 20;
			break;
		case 'c':
			descuento = 10;
			break;
		case 'd':
			descuento = 5;
			break;
		}
		mediosdepago = "efectivo o cheque.";
		tipo = "bueno";
		break;
	case 'm':
		descuento = 0;
		mediosdepago = "efectivo solamente.";
		tipo = "malo";
		break;
	}

	cout << endl;
	cout << "El cliente " << tipo << " tiene un descuento del " << descuento << "%" << " en el articulo " << articulo << endl;
	cout << "Y lo puede pagar con " << mediosdepago << endl << endl;
	
	return 0;
}