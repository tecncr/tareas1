#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	int f, i, num;

	cout << "Programa que calcula el factorial de un numero." << endl;

	do {
		cout << "Ingrese un numero: " << endl;
		cin >> num;
		if (num<0) {
			cout << "No se permiten numeros negativos debido a" << endl;
			cout << "la inexistencia del factorial de estos." << endl;
			cout << "Por favor ingrese un numero positivo." << endl;
		}
	} while (num<0);

	if (num>=0) {
		i = 0;
		f = 1;
		while (i<num) {
			i = i+1;
			f = f*i;
		}
		cout << "El factorial de " << num << " es: " << f << endl;
	} else {
		if (num==0 || num==1) {
			cout << "El factorial de " << num << "! es: 1" << endl;
		}
	}

	return 0;
}