#include "iostream"
using namespace std;

int main(int argc, char * argv[]){
	
	int dia, mes, year, max_mes;
	string mes_literal;

	cout << "Programa que valida una fecha ingresada." << endl;

	do {
		do {
			do {
				cout << "Ingrese el dia del mes:";
				cin >> dia;
				if (dia<1 || dia>31) {
					cout << "El dia ingresado no es valido. Por favor ingrese valores entre 1 y 31." << endl;
				}
			} while (dia<1 || dia>31);
			do {
				cout << "Ingrese el numero del mes:";
				cin >> mes;
				if (mes<1 || mes>12) {
					cout << "El dia ingresado no es valido. Por favor ingrese valores entre 1 y 12." << endl;
				}
			} while (mes<1 || mes>12);
			switch (mes) {
			case 1:
				max_mes = 31;
				mes_literal = "enero";
				break;
			case 2:
				max_mes = 29;
				mes_literal = "febrero";
				break;
			case 3:
				max_mes = 31;
				mes_literal = "marzo";
				break;
			case 4:
				max_mes = 30;
				mes_literal = "abril";
				break;
			case 5:
				max_mes = 31;
				mes_literal = "mayo";
				break;
			case 6:
				max_mes = 30;
				mes_literal = "junio";
				break;
			case 7:
				max_mes = 31;
				mes_literal = "julio";
				break;
			case 8:
				max_mes = 31;
				mes_literal = "agosto";
				break;
			case 9:
				max_mes = 30;
				mes_literal = "setiembre";
				break;
			case 10:
				max_mes = 31;
				mes_literal = "octubre";
				break;
			case 11:
				max_mes = 30;
				mes_literal = "noviembre";
				break;
			case 12:
				max_mes = 31;
				mes_literal = "diciembre";
				break;
			}
			if (dia>max_mes) {
				cout << "La fecha ingresada no es valida, " << mes_literal << " no tiene " << dia << " dias." << endl;
			}
		} while (dia>max_mes);

		cout << "Ingrese el anio: " << endl;
		cin >> year;

		if (mes==2) {
			if (year%4==0 && ((year%400==0) || (year%100!=0))) {
				max_mes = 29;
			} else {
				max_mes = 28;
			}
		}
		if (dia>max_mes) {
			if (mes==2) {
				cout << year << " no es bisiesto, por lo tanto, febrero de " << year << " no puede" << endl;
				cout << "tener mas de 28 dias. La fecha ingresada es invalida." << endl;
			} else {
				cout << "La fecha ingresada (" << dia << " de " << mes_literal << " del " << year << ") no es v�lida." << endl;
				cout << "debido a que " << mes_literal << " no tiene " << dia << " dias." << endl;
			}
			cout << "Intentelo nuevamente." << endl;
		}
	} while (dia>max_mes);

	cout << "La fecha ingresada (" << dia << " de " << mes_literal << " del " << year << ") es correcta." << endl;
	
	return 0;
}