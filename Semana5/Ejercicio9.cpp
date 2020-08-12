/* Estimada profesora, al ser este ejercicio 9 igual al de la practica anterior,
este es el algoritmo que comparti con un compañero ya que tenia muchas dificultades
para realizarlo, por lo que podrian existir ciertas similitudes (aunque no al 100%)
con la solucion presentada por el, no obstante, como prueba de que he desarrollado 
este algoritmo incluire comentarios describiendo su funcionamiento.

Atte: Nicolas Castillo. */

#include "iostream"
#include <conio.h>
using namespace std;

int main(int argc, char* argv[])
{
    int sueldo;

	//inicializamos arreglo con valores de cada moneda/billete y sus respectivas cantidades
    int valorEfectivo [7] = {1,2,5,10,20,50,100};
    int cantidadEfectivo [7] = {0,0,0,0,0,0,0};

	//solicitamos al usuario la entrada de datos
	cout << "Programa que distribuye un pago en la maxima cantidad posible de monedas y billetes." << endl;
	cout << "Ingrese el pago del trabajador: ";
	cin >> sueldo;
	
	//validamos que el sueldo no sea negativo
	while (sueldo < 0)
    {
		cout << "El monto del pago a realizar no puede ser negativo." << endl;
		cout << "Por favor ingrese el pago del trabajador: ";
		cin >> sueldo;
	}

	/* con el fin de poder mostrar al usuario el sueldo repartido al final del proceso,
	copie la variable en otra ya que esta se va a decrementar hasta llegar a 0 */	
    int difOperable = sueldo;

	// aqui comienza la logica del algoritmo, si aun queda diferencia operable...	
    while  (difOperable != 0)
    {
		// para cada moneda o billete de cada denominacion...
		for (int i=0 ; i<=7 ; i++)
        {
			/* y si es posible restar la diferenciaOperable con el valor de la moneda o billete
			sin que esto salga negativo...*/
			if ((difOperable - valorEfectivo[i]) >= 0)
            {
				// entonces se procede a hacer dicha accion
				difOperable -= valorEfectivo[i];
				// y se incrementa la cantidad de monedas o billetes de dicha denominacion
				cantidadEfectivo[i]++;
				/* esto hace que el algoritmo tenga una tendencia a repartir el sueldo
				de la manera mas dispersa posible, tal como lo solicitado */
			}
	    }
    }

    // Mostramos en pantalla la distribucion del sueldo
	cout << endl << "Este pago de " << sueldo <<" soles se puede realizar en: "<< endl;
	cout << cantidadEfectivo[0] << " monedas de " << valorEfectivo[0] << " sol."<< endl;
	cout << cantidadEfectivo[1] << " monedas de " << valorEfectivo[1] << " soles."<< endl;
	cout << cantidadEfectivo[2] << " monedas de " << valorEfectivo[2] << " soles." << endl;
	cout << cantidadEfectivo[3] << " billetes de " << valorEfectivo[3] << " soles." << endl;
	cout << cantidadEfectivo[4] << " billetes de " << valorEfectivo[4] << " soles." << endl;
	cout << cantidadEfectivo[5] << " billetes de " << valorEfectivo[5] << " soles." << endl;
	cout << cantidadEfectivo[6] << " billetes de " << valorEfectivo[6] << " soles." << endl;

	cout << endl << "Presione cualquier tecla para salir.";
	getch();

	return 0;

}