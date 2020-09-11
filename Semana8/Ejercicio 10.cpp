#include "iostream"
using namespace std;

int main(int argc, char * argv[]){

	int num, perfecto, x;

	x = 2;
	perfecto = 0;

	cout << "Numeros perfectos " << endl;
	cout << " Ingrese un numero: " << endl;
	cin >> num;

	while (x<=num) {
		if (num%x==0) {
			perfecto = perfecto+(num/x);
		}
		x = x+1;
	}

	if (perfecto==num) {
		cout << " El numero " << num << " es un numero perfecto." << endl;
	} else {
		cout << " El numero " << num << " no es un numero perfecto." << endl;
	}

	return 0;
}