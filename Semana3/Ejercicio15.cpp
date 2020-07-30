#include "iostream"
#include <math.h>
//#include <conio.h> (Descomentar en Windows)
#define RADIO 2
using namespace std;

int main(int argc, char* argv[]){	
    double altura, volumen;

	cout << "Programa que calcula el volumen de gaseosa de los tanques de 2m de radio." << endl;
	cout << "Ingrese la altura (en metros) del nivel de gaseosa: ";
	cin >> altura;

	volumen = M_PI * pow(RADIO,2) * altura;

	cout << "El volumen de gaseosa es de " << volumen << " metros cubicos." << endl;


//  getch(); (Capturar caracter siguiente para evitar que se cierre la ventana en Windows)
    return 0;
}