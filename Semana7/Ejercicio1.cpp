#include "iostream"
#include <iomanip>
using namespace std;

int main(int argc, char * argv[]){

	double monto, interes, total;
	char plazo;

	cout << "Programa que calcula los intereses a pagar." << endl;
	cout << "Ingrese el monto del prestamo: ";
	cin >> monto;
	
	do {
		cout << "Seleccione el plazo en el que se pagara el prestamo." << endl;
		cout << "Ingrese a si el prestamo sera pagado en 24 meses." << endl;
		cout << "Ingrese b si el prestamo sera pagado en 18 meses." << endl;
		cout << "Ingrese c si el prestamo sera pagado en 12 meses." << endl;
		cout << "Ingrese d si el prestamo sera pagado en 6 meses." << endl;
		cout << "Ingrese e si el prestamo sera pagado en 3 meses." << endl;
		cout << "Escriba la opcion del plazo de pago: ";
		cin >> plazo;
		if (plazo!='a' and plazo!='b' and plazo!='c' and plazo!='d' and plazo!='e') {
			cout << "La opcion ingresada es invalida." << endl;
		}
	} while (plazo!='a' and plazo!='b' and plazo!='c' and plazo!='d' and plazo!='e');
	
	switch (plazo){
	case 'a':
		interes = monto * 0.12;
		break;
	case 'b':
		interes = monto * 0.1;
		break;
	case 'c':
		interes = monto * 0.09;
		break;
	case 'd':
		interes = monto * 0.08;
		break;
	case 'e':
		interes = monto * 0.06;
		break;
	}

	total = monto + interes;

	cout << "El interes a pagar sera de S/ " << fixed << setprecision(2) << interes << endl;
	cout << "El monto total a pagar sera S/ " << fixed << setprecision(2) << total << endl;
	
	return 0;
}