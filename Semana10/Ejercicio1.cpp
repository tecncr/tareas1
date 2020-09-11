#include "iostream"
using namespace std;

int obtener_inverso(int num) {
	int a, inverso, res;
	a = num;
	inverso = 0;

	while (a > 0) {
		res = a%10;
		inverso = inverso*10 + res;
		a = int(a/10);
	}

	return inverso;
}

int main(int argc, char * argv[]){
	int n;

	cout << "Programa que indica si un numero es capicua o no." << endl;
	cout << "Ingrese un numero: " ;
	cin >> n;

	if (n == obtener_inverso(n)) {
		cout << "El numero " << n << " es capicua." << endl;
	} else {
		cout << "El numero " << n << " NO es capicua." << endl;
	}

	return 0;
}
