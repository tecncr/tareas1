#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar_positivo() {
	long long int num;
	do {
		cout << "Ingrese el numero binario que desee convertir: ";
		cin >> num;
		if (num<0) {
			cout << "El numero ingresado no puede ser negativo." << endl;
			cout << "Intentelo nuevamente." << endl;
		}
	} while (num<0);
	return num;
}

int ingresar_validar_bin() {

	long long int binario, in, tmp, u_cifra;

	in = ingresar_validar_positivo();
	tmp = in;

	while (tmp>0) {
		// Verificacion de digitos binarios
		u_cifra = tmp%10;
		tmp = floor(tmp/10);
		if (u_cifra>1) {
			cout << "El numero ingresado contiene digitos no binarios." << endl;
			cout << "Intentelo nuevamente." << endl;
			in = ingresar_validar_positivo();
			tmp = in;
		}
	}

	binario = in;
	return binario;
}

int main(int argc, char * argv[]){
	long long int bin, dec, tmp, u, x;
	bin = ingresar_validar_bin();
	tmp = bin;
	x = 1;
	dec = 0;
	// Conversion de binario a decimal mediante "divisiones sucesivas inversas"
	while (bin>0) {
		u = bin%10;
		bin = floor(bin/10);
		dec = dec+(u*x);
		x *= 2;
	}
	cout << endl << "El numero binario " << tmp << " convertido a decimal es: " << dec << endl;
	return 0;
}
