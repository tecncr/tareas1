#include "iostream"
using namespace std;

int main(int argc, char * argv[]){
	int a;
	int b;
	int digitos;
	int impares;
	int n;
	impares = 0;
	digitos = 0;
	cout << "Programa que muestra el n�mero de d�gitos de un n�mero y cu�ntos son impares." << endl;
	do {
		cout << "Escriba un n�mero:" << endl;
		cin >> n;
		if (n<0) {
			cout << "Por favor ingrese un n�mero entero positivo." << endl;
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
	cout << "El n�mero " << n << " tiene " << digitos << " d�gitos, de los cuales " << impares << " de ellos son impares." << endl;
	return 0;
}

