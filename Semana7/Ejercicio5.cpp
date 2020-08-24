#include "iostream"
using namespace std;

int main(int argc, char * argv[]){
	
	double preciounitario, bruto, descuento, total;
	int cantidad;
	char marca;

	cout << "Programa que calcula el precio a pagar por diskettes." << endl;
	cout << "Ingrese el precio unitario del diskette: ";
	cin >> preciounitario;
	cout << "Ingrese la cantidad de diskettes vendidos: ";
	cin >> cantidad;

	bruto = preciounitario*cantidad;

	do {
		cout << "Seleccione la marca del diskette." << endl;
		cout << "Ingrese a si la marca es 3M." << endl;
		cout << "Ingrese b si la marca es NCR." << endl;
		cout << "Ingrese c si la marca es Sentinel." << endl;
		cout << "Ingrese d si la marca es Burroughs." << endl;
		cout << "Ingrese e si la marca es GoldStar." << endl;
		cout << "Escriba la opcion correspondiente a la marca: " << endl;
		cin >> marca;
		if (marca!='a' and marca!='b' and marca!='c' and marca!='d' and marca!='e') {
			cout << "La opcion ingresada es invalida." << endl;
		}
	} while (marca!='a' and marca!='b' and marca!='c' and marca!='d' and marca!='e');

	switch (marca) {
	case 'a':
		descuento = preciounitario*cantidad*0.1;
		break;
	case 'b':
		descuento = preciounitario*cantidad*0.15;
		break;
	case 'c':
		descuento = preciounitario*cantidad*0.2;
		break;
	case 'd':
		descuento = preciounitario*cantidad*0.25;
		break;
	case 'e':
		descuento = preciounitario*cantidad*0.3;
		break;
	}

	total = bruto - descuento;

	cout << "El importe bruto es           S/ " << bruto << endl;
	cout << "El descuento sera de          S/ " << descuento << endl;
	cout << "El monto total a pagar sera   S/ " << total << endl;

	return 0;
}

