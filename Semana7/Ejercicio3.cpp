#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	int dia, mes, max_mes;
	string mes_literal, estacion;

	cout << "Programa que calcula que estacion del anio transcurre durante una fecha especifica." << endl;
	
	do {
		do {
			cout << "Ingrese el dia del mes:" << endl;
			cin >> dia;
			if (dia<1 || dia>31) {
				cout << "El dia ingresado no es valido. Por favor ingrese valores entre 1 y 31." << endl;
			}
		} while (dia<1 || dia>31);
		do {
			cout << "Ingrese el numero del mes:" << endl;
			cin >> mes;
			if (mes<1 || mes>12) {
				cout << "El dia ingresado no es valido. Por favor ingrese valores entre 1 y 12." << endl;
			}
		} while (mes<1 || mes>12);
		switch (mes) {
		case 1:
			max_mes = 31;
			mes_literal = "enero";
			estacion = "verano";
			break;
		case 2:
			max_mes = 29;
			mes_literal = "febrero";
			estacion = "verano";
			break;
		case 3:
			max_mes = 31;
			mes_literal = "marzo";
			if (dia>=21) {
				estacion = "otonio";
			} else {
				estacion = "verano";
			}
			break;
		case 4:
			max_mes = 30;
			mes_literal = "abril";
			estacion = "otonio";
			break;
		case 5:
			max_mes = 31;
			mes_literal = "mayo";
			estacion = "otonio";
			break;
		case 6:
			max_mes = 30;
			mes_literal = "junio";
			if (dia>=22) {
				estacion = "invierno";
			} else {
				estacion = "otonio";
			}
			break;
		case 7:
			max_mes = 31;
			mes_literal = "julio";
			estacion = "invierno";
			break;
		case 8:
			max_mes = 31;
			mes_literal = "agosto";
			estacion = "invierno";
			break;
		case 9:
			max_mes = 30;
			mes_literal = "setiembre";
			if (dia>=23) {
				estacion = "primavera";
			} else {
				estacion = "invierno";
			}
			break;
		case 10:
			max_mes = 31;
			mes_literal = "octubre";
			estacion = "primavera";
			break;
		case 11:
			max_mes = 30;
			mes_literal = "noviembre";
			estacion = "primavera";
			break;
		case 12:
			max_mes = 31;
			mes_literal = "diciembre";
			if (dia>=21) {
				estacion = "verano";
			} else {
				estacion = "primavera";
			}
			break;
		}

		if (dia>max_mes) {
			cout << "La fecha ingresada no es valida, " << mes_literal << " no tiene " << dia << " dias." << endl;
		}

	} while (dia>max_mes);

	cout << "Durante el " << dia << " de " << mes_literal << " estaremos en " << estacion << endl;
	
	return 0;
}