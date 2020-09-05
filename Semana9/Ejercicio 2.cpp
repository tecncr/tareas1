#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	int i, num, suma;

	suma = 0;

	cout << "Programa que calcula la suma de numeros impares." << endl;
	cout << "Escriba el numero limite de los sumandos: " << endl;
	cin >> num;

	while (num<0) {
		cout << "No puede ser numero negativo, digite un positivo" << endl;
		cin >> num;
	}
	for (i=1;i<=num;i++) {
		if (i%2>0) {
			suma = suma+i;
		}
	}

	cout << "La suma de los numeros impares es: " << suma << endl;
	
	return 0;
}