#include "iostream"
using namespace std;

int main(int argc, char * argv[]){
	
	double cuota, pdescuento, descuento, importe;
	char tipo, colegio;

	cout << "Programa que calcula el importe a pagar por un alumno." << endl;
	cout << "Ingrese la cuota base: ";

	cin >> cuota;

	do {
		cout << "Ingrese el tipo de alumno (A, B, C): ";
		cin >> tipo;
		if (tipo!='a' && tipo!='b' && tipo!='c' && tipo!='A' && tipo!='B' && tipo!='C') {
			cout << "Tipo de alumno invalido. Solo se admiten los valores A, B, C" << endl;
		}
	} while (tipo!='a' && tipo!='b' && tipo!='c' && tipo!='A' && tipo!='B' && tipo!='C');
	do {
		cout << "Ingrese el tipo de colegio del que proviene. " << endl;
		cout << "(N para Nacional, P para particular): ";
		cin >> colegio;
		if (colegio!='n' && colegio!='p' && colegio!='N' && colegio!='P') {
			cout << "Tipo de colegio invalido. Solo se admiten los valores N, P" << endl;
		}
	} while (colegio!='n' && colegio!='p' && colegio!='N' && colegio!='P');
	switch (tipo) {
	case 'a':
		switch (colegio) {
		case 'n':
			pdescuento = 0.5;
			break;
		case 'N':
			pdescuento = 0.5;
			break;
		case 'p':
			pdescuento = 0.25;
			break;
		case 'P':
			pdescuento = 0.25;
			break;
		}
		break;
	case 'A':
		switch (colegio) {
		case 'n':
			pdescuento = 0.5;
			break;
		case 'N':
			pdescuento = 0.5;
			break;
		case 'p':
			pdescuento = 0.25;
			break;
		case 'P':
			pdescuento = 0.25;
			break;
		}
		break;
	case 'b':
		switch (colegio) {
		case 'n':
			pdescuento = 0.4;
			break;
		case 'N':
			pdescuento = 0.4;
			break;
		case 'p':
			pdescuento = 0.2;
			break;
		case 'P':
			pdescuento = 0.2;
			break;
		}
		break;
	case 'B':
		switch (colegio) {
		case 'n':
			pdescuento = 0.4;
			break;
		case 'N':
			pdescuento = 0.4;
			break;
		case 'p':
			pdescuento = 0.2;
			break;
		case 'P':
			pdescuento = 0.2;
			break;
		}
		break;
	case 'c':
		switch (colegio) {
		case 'n':
			pdescuento = 0.3;
			break;
		case 'N':
			pdescuento = 0.3;
			break;
		case 'p':
			pdescuento = 0.15;
			break;
		case 'P':
			pdescuento = 0.15;
			break;
		}
		break;
	case 'C':
		switch (colegio) {
		case 'n':
			pdescuento = 0.3;
			break;
		case 'N':
			pdescuento = 0.3;
			break;
		case 'p':
			pdescuento = 0.15;
			break;
		case 'P':
			pdescuento = 0.15;
			break;
		}
		break;
	}

	descuento = cuota*pdescuento;
	importe = cuota-descuento;

	cout << "El alumno puede acceder a un descuento del " << pdescuento*100 << "%" << endl;
	cout << "Equivalente a S/ " << descuento << endl;
	cout << "El importe total a pagar es S/ " << importe << endl;

	return 0;
}

