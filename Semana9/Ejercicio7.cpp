#include "iostream"
using namespace std;

int main(int argc, char * argv[]){
	int a, b, digitos, impares, n;
	impares = 0;
	digitos = 0;
	cout << "Programa que muestra el numero de digitos de un numero y cuantos son impares." << endl;
	do {
		cout << "Escriba un numero:" << endl;
		cin >> n;
		if (n<0) {
			cout << "Por favor ingrese un numero entero positivo." << endl;
		}
	} while (n<0);
	a = n;
	while (a>0) {
		b = a%10;
		if (b%2>0) {
			impares = impares+1;
		}
		a = (a-b)/10;
		digitos = digitos+1;
	}
	if (n==0) {
		digitos = 1;
	}
	cout << "El numero " << n << " tiene " << digitos << " digitos, de los cuales " << impares << " de ellos son impares." << endl;
	return 0;
}