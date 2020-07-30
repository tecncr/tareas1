#include "iostream"
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){	
    double pounds, feet, kg, m;
	cout << "Programa que convierte medidas del sistema anglosajon al sistema internacional." << endl;
	cout << "Ingrese el peso del elefante en libras: ";
	cin >> pounds;
	while (pounds < 0)
    {
		cout <<"El peso no puede ser negativo." << endl;
		cout <<"Por favor ingrese el peso del elefante en libras: ";
		cin >> pounds;
	}
		
	cout <<"Ingrese la altura del elefante en pies: ";
	cin >> feet;

	while (feet < 0)
    {
		cout <<"La altura no puede ser negativa." << endl;
		cout <<"Por favor ingrese la altura del elefante en pies: ";
		cin >> feet;
    }
	
	kg = pounds / 2.2046;
	m = feet / 3.2808;
	
	cout <<"El elefante pesa: " << kg << " kilogramos y mide " << m <<" metros." << endl;

//  getch(); (Descomentar en Windows)
    return 0;
}