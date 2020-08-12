#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char * argv[]){
	
	double num1, num2, num3;

	cout << "Programa que imprime tres numeros en orden ascendente." << endl;
	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << "Ingrese el tercer numero: ";
	cin >> num3;

	cout << "Los numeros ordenados de manera ascendente son: ";

	if (num1<=num2 && num1<=num3 && num2<=num3) {
		cout << num1 << ", " << num2 << ", " << num3 << endl;
	} else {
		if (num1<=num2 && num1<=num3 && num3<=num2) {
			cout << num1 << ", " << num3 << ", " << num2 << endl;
		} else {
			if (num2<=num1 && num2<=num3 && num1<=num3) {
				cout << num2 << ", " << num1 << ", " << num3 << endl;
			} else {
				if (num2<=num1 && num2<=num3 && num3<=num1) {
					cout << num2 << ", " << num3 << ", " << num1 << endl;
				} else {
					if (num3<=num1 && num3<=num2 && num1<=num2) {
						cout << num3 << ", " << num1 << ", " << num2 << endl;
					} else {
						if (num3<=num1 && num3<=num2 && num2<=num1) {
							cout << num3 << ", " << num2 << ", " << num1 << endl;
						}
					}
				}
			}
		}
	}

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}