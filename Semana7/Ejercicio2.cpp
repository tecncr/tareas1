#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	int mes;

	cout << "Programa que indica el nombre de un mes de acuerdo a su numero." << endl;

	do {
		cout << "Ingrese el numero del mes: ";
		cin >> mes;
		if (mes < 1 or mes > 12) {
			cout << "El numero ingresado no corresponde a ningun mes." << endl;
		}
	} while (mes < 1 or mes > 12);

	cout << "El numero " << mes << " corresponde al mes de ";

	switch (mes) {
	case 1:
		cout << "enero." << endl;
		break;
	case 2:
		cout << "febrero." << endl;
		break;
	case 3:
		cout << "marzo." << endl;
		break;
	case 4:
		cout << "abril." << endl;
		break;
	case 5:
		cout << "mayo." << endl;
		break;
	case 6:
		cout << "junio." << endl;
		break;
	case 7:
		cout << "julio." << endl;
		break;
	case 8:
		cout << "agosto." << endl;
		break;
	case 9:
		cout << "setiembre." << endl;
		break;
	case 10:
		cout << "octubre." << endl;
		break;
	case 11:
		cout << "noviembre." << endl;
		break;
	case 12:
		cout << "diciembre." << endl;
		break;
	}

	return 0;
}

