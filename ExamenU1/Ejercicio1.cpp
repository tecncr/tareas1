#include "iostream"
#include <math.h>
//#include <conio.h> (Libreria para capturar caracter y evitar que se cierre en Windows)
#define RADIO 2.5
using namespace std;

int main(int argc, char* argv[]){	
	
    double altura, volumen;

	cout << "Programa que calcula el volumen de gaseosa de los tanques de 5m de diametro." << endl;
	cout << "Ingrese la altura (en metros) del nivel de gaseosa: ";
	cin >> altura;

	volumen = M_PI * pow(RADIO,2) * altura;

	cout << "El volumen de gaseosa es de " << volumen << " metros cubicos." << endl;


/*	(Windows)

	cout << "Presione cualquier tecla para salir.";
	getch();

*/
    return 0;
}