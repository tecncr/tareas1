#include "iostream"
#include <math.h>

using namespace std;

int main(int argc, char * argv[]){

	int a, b, np_linea, num_div_prop;

	cout << "Programa que calcula todos los numeros primos de 3 digitos." << endl;
	cout << "Los resultados son:" << endl;

	np_linea = 0;
	for (a=100;a<=999;a++) {
		num_div_prop = 0;
		for (b=1;b<=floor(a/2)+1;b++) {
			// Trabajando con divisores propios para reducir consumo de recursos
			if (a%b==0) {
				num_div_prop = num_div_prop+1;
			}
		}
		if (num_div_prop==1) {
			cout << a << ", ";
			// Insertando salto de linea cada 12 numeros
			// para una correcta visualizacion
			np_linea = np_linea+1;
			if (np_linea==12) {
				cout << "" << endl;
				np_linea = 0;
			}
		}
	}
	cout << "fin." << endl;
	
	return 0;
}
