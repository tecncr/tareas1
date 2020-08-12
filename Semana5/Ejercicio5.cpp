#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char * argv[]){

	int hr, min, seg;

	cout << "Programa que calcula la hora con un segundo adelantado." << endl;
	cout << "Ingrese la hora: ";
	cin >> hr;
	cout << "Ingrese los minutos: ";
	cin >> min;
	cout << "Ingrese los segundos: ";
	cin >> seg;
	cout << "La hora con un segundo adelantado es: " << hr << ":" << min << ":" << seg+1 << endl;
	
	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}