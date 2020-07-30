#include "iostream"
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){
	
    double gb, mb, kb, bytes;
    long bits;

	cout << "Programa que calcula la capacidad en bits de un dispositivo." << endl;
	cout << "Ingrese la capacidad del dispositivo en gigabytes: ";
	cin >> gb;
	mb = 1024 * gb;
	kb = 1024 * mb;
	bytes = 1024 * kb;
	bits = 8 * bytes;
	cout << gb << " gigabytes equivale a "<< bits << " bits." << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}