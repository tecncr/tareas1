#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar_positivo() {

	int num;

	do {
		cout << "Ingrese el valor que desee convertir: ";
		cin >> num;
		if (num<0) {
			cout << "El valor ingresado no puede ser negativo." << endl;
			cout << "Intentelo nuevamente." << endl;
		}
	} while (num<0);
	
	return num;
}

int convertir_a_binario(int dec) {
	
	int bin, tmp, x;
	
	tmp = dec;
	x = 1;
	bin = 0;

	// Conversion de decimal a binario mediante "divisiones sucesivas"
	while (tmp>0) {
		if (tmp%2==1) {
			bin = bin+x;
		}
		tmp = int(tmp/2);
		x = x*10;
	}
	
	return bin;
}

int main() {

	int binario, decimal;

	cout << "Programa que convierte un numero en base 10 a binario." << endl;

	decimal = ingresar_validar_positivo();
	binario = convertir_a_binario(decimal);

	cout << "El numero " << decimal << " convertido a binario es: " << binario << endl;
	
	return 0;
}
