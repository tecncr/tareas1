#include "iostream"
#include <math.h>
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){	
    double radio, volumen;

	cout << "Programa que calcula el volumen de una esfera." <<endl;
	cout << "Ingrese el radio: ";
	cin >> radio;

	volumen = 4/3 * M_PI * pow(radio,3);

	cout << "El volumen de la esfera es " << volumen << " unidades cubicas." << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}