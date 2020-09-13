#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar(){
	int num;
	do {
		cout << "Ingrese el valor de N: ";
		cin >> num;
		if (num<0) {
			cout << "N no admite valores negativos." << endl;
			cout << "Intentelo nuevamente." << endl;
		}
	} while (num<0);

	return num;
}

int main(int argc, char * argv[]){

	int i, n1, n2 ,n3, num;
	long long int sumatoria;

	cout << "Algoritmo que calcula la suma de los N primeros numeros de Fibonacci" << endl;
	
	num = ingresar_validar();

	n1 = 0;
	n2 = 1;
	n3 = 0;
	sumatoria = 0;
	
	for (i=1;i<=num;i++) {
		sumatoria = sumatoria+n1;
		n3 = n1+n2;
		n1 = n2;
		n2 = n3;
	}
	
	cout << "La sumatoria de los " << num << " primeros numeros de Fibonacci es: " << sumatoria << endl;
	
	return 0;
}
