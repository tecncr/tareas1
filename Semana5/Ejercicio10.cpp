#include "iostream"
#include <conio.h>
#include <iomanip> //para poder redondear

#define PRECIO_M2_ZONA_A 60
#define PRECIO_M2_ZONA_B 55
#define PRECIO_M2_ZONA_C 48
#define PRECIO_M2_ZONA_D 36

using namespace std;

int main(int argc, char* argv[])
{
	double ancho, area, largo, precio;
	string zona; //Definido como caracter para evitar errores de entrada del usuario

	cout << "Programa que calcula el precio de un terreno." << endl;
	cout << "Ingrese el largo del terreno en metros: ";
	cin >> largo;
	cout << "Ingrese el ancho del terreno en metros: ";
	cin >> ancho;
	area = largo * ancho;

	do {
		cout << "Ingrese la zona de la ciudad donde se ubica el terreno (a/b/c/d): ";
		cin >> zona;
		if (zona != "a" and zona != "b" and zona != "c" and zona != "d") {
			cout << "La zona ingresada es invalida. Solo se admiten los valores a, b, c, d." << endl;
		}
	} while (!(zona == "a" or zona == "b" or zona == "c" or zona == "d"));

	if (zona == "a") {
		precio = area * PRECIO_M2_ZONA_A;
	} else {
		if (zona == "b") {
			precio = area * PRECIO_M2_ZONA_B;
		} else {
			if (zona == "c") {
				precio = area * PRECIO_M2_ZONA_C;
			} else {
				precio = area * PRECIO_M2_ZONA_D;
			}
		}
	}

	cout << endl << "El precio de venta del terreno es: $ " << fixed << setprecision(2) << precio << endl;

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}