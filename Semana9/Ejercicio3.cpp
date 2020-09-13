#include "iostream"
#include <math.h>

using namespace std;

int main(int argc, char * argv[]){

	int d_cubo, num, suma_cubos, tmp, u_cifra;
	
	cout << "Programa que calcula los 5 cubos perfectos / numeros de Amstrong" << endl;
	cout << "A continuacion se mostraran los resultados:" << endl;
	
	for (num=1; num<=500; num++) {
		suma_cubos = 0;
		tmp = num;
		do {
			u_cifra = tmp%10;
			d_cubo = pow(u_cifra,3);
			suma_cubos = suma_cubos+d_cubo;
			tmp = int(tmp/10);
		} while (tmp!=0);
		if (suma_cubos==num) {
			cout << num << endl;
		}
	}

	return 0;
}

