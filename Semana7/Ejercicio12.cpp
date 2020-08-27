#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	int num, miles, cientos, decenas, m, c, d, u;

	cout << "Programa que convierte un numero arabico a numeros romanos." << endl;
	
	do {
		cout << "Ingrese un numero entre 1 y 3999: " ;
		cin >> num;
		if (num < 1) {
			cout << endl << "El numero no debe ser inferior a 1. Por favor intentelo nuevamente." << endl;
		}
		if (num > 3999) {
			cout << endl << "El numero no debe ser mayor que 3999. Por favor intentelo nuevamente." << endl;
		}
	} while (num < 1 or num > 3999);

	miles = num - num % 1000;
	m = miles/1000;
	cientos = num - miles - num % 100;
	c = cientos / 100;
	decenas = num - miles - cientos - num % 10;
	d = decenas/10;
	u = num % 10;
	
	cout << endl << "La representacion en romanos del numero " << num << " es: " << endl;

	switch (m) {
	case 1: cout << "M";
			break;
	case 2:	cout << "MM";
			break;
	case 3:	cout << "MMM";
			break;
	}

	switch (c) {
	case 1:	cout << "C";
			break;
	case 2:	cout << "CC";
			break;
	case 3:	cout << "CCC";
			break;
	case 4:	cout << "CD";
			break;
	case 5:	cout << "D";
			break;
	case 6:	cout << "DC";
			break;
	case 7:	cout << "DCC";
			break;
	case 8:	cout << "DCCC";
			break;
	case 9:	cout << "CM";
			break;
	}

	switch (d) {
	case 1:	cout << "X";
			break;
	case 2:	cout << "XX";
			break;
	case 3:	cout << "XXX";
			break;
	case 4:	cout << "XL";
			break;
	case 5:	cout << "L";
			break;
	case 6:	cout << "LX";
			break;
	case 7:	cout << "LXX";
			break;
	case 8:	cout << "LXXX";
			break;
	case 9:	cout << "XC";
			break;
	}

	switch (u) {
	case 1:	cout << "I";
			break;
	case 2:	cout << "II";
			break;
	case 3:	cout << "III";
			break;
	case 4:	cout << "IV";
			break;
	case 5:	cout << "V";
			break;
	case 6:	cout << "VI";
			break;
	case 7:	cout << "VII";
			break;
	case 8:	cout << "VIII";
			break;
	case 9:	cout << "IX";
			break;
	}

	cout << endl << endl;

	return 0;
}