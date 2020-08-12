#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char * argv[]){

	double lado1, lado2, lado3;

	cout << "Programa que clasifica un triangulo en base a la medida de sus lados." << endl;
	cout << "Ingrese la medida del primer lado: ";
	cin >> lado1;
	cout << "Ingrese la medida del segundo lado: ";
	cin >> lado2;
	cout << "Ingrese la medida del tercer lado: ";
	cin >> lado3;

	if (lado1==lado2 and lado1==lado3) {
		cout << "El triangulo es equilatero." << endl;
	} else {
		if ((lado1==lado2 and lado1!=lado3) or (lado2==lado3 and lado2!=lado1) or (lado1==lado3 and lado1!=lado2)) {
			cout << "El triangulo es isosceles." << endl;
		} else {
			cout << "El triangulo es escaleno." << endl;
		}
	}

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}

