#include "iostream"
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){	
    double a, b, c, area;

 	cout << "Programa que calcula el area total de un paralelepipedo rectangular." << endl;
	cout << "Ingrese el largo: ";
	cin >>  a;
	cout << "Ingrese el ancho: ";
	cin >> b;
	cout << "Ingrese la altura: ";
	cin >> c;

	area = 2 * ((a*b) + (b*c) + (a*c));

	cout << "El área total del paralelepipedo rectangular es de " << area << " unidades cuadradas." << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}