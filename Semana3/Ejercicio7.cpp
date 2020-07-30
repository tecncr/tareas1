#include "iostream"
//#include <conio.h> (Descomentar en Windows)
using namespace std;

int main(int argc, char* argv[]){
	
    float cm, km;
	cout << "Programa para convertir centimetros a kilometros." << endl;
	cout << "Ingrese la cantidad de centimetros: ";
	cin >> cm;
	km = cm/100000;
	cout << cm << " centimetros equivalen a " << km << " kilometros." << endl;

//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}