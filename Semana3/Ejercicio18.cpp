#include "iostream"
#include <iomanip> //para poder redondear
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){	
	double costo, precioFinal;

	cout << "Programa que calcula el precio de venta final de un automovil." << endl;
	cout << "Ingrese el costo del automovil: S/ ";
	cin >> costo;

	precioFinal = costo + (costo * 0.12) + (costo * 0.06);

	cout << "El precio para el comprador será de: S/ " << fixed << setprecision(2) << precioFinal << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}