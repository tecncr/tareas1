#include "iostream"
//#include <conio.h> Descomentar en Windows  
using namespace std;

int main(int argc, char* argv[])
{

    int sueldo;
	int valorEfectivo [7] = {1,2,5,10,20,50,100};
    int cantidadEfectivo [7] = {0,0,0,0,0,0,0};

	cout << "Programa que distribuye un pago en la maxima cantidad posible de monedas y billetes." << endl;
	cout << "Ingrese el pago del trabajador: ";
	cin >> sueldo;
	
	while (sueldo < 0)
    {
		cout << "El monto del pago a realizar no puede ser negativo." << endl;
		cout << "Por favor ingrese el pago del trabajador: ";
	}

    int difOperable = sueldo;
	
    while  (difOperable != 0)
    {
		for (int i=0 ; i<=7 ; i++)
        {
			if ((difOperable - valorEfectivo[i]) >= 0)
            {
				difOperable -= valorEfectivo[i];
				cantidadEfectivo[i]++;
			}
	    }
    }
    
	cout << "Este pago se puede realizar en: "<< endl;
	cout << cantidadEfectivo[0] << " monedas de " << valorEfectivo[0] << " sol."<< endl;
	cout << cantidadEfectivo[1] << " monedas de " << valorEfectivo[1] << " soles."<< endl;
	cout << cantidadEfectivo[2] << " monedas de " << valorEfectivo[2] << " soles." << endl;
	cout << cantidadEfectivo[3] << " billetes de " << valorEfectivo[3] << " soles." << endl;
	cout << cantidadEfectivo[4] << " billetes de " << valorEfectivo[4] << " soles." << endl;
	cout << cantidadEfectivo[5] << " billetes de " << valorEfectivo[5] << " soles." << endl;
	cout << cantidadEfectivo[6] << " billetes de " << valorEfectivo[6] << " soles." << endl;

    return 0;
//  getch();    (Descomentar en Windows)
}