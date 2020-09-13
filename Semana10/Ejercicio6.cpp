#include "iostream"
#include <math.h>

using namespace std;

int ingresar_validar(string var_name, int max, int min) {
	int num;
	do {
		cout << "Ingrese " << var_name << ": ";
		cin >> num;
		if (num>max) {
			cout << var_name << " no puede ser mayor que " << max << endl;
			cout << "Intentelo nuevamente." << endl;
		}
		if (num<min) {
			if (min==0) {
				cout << "El valor de " << var_name << " no puede ser negativo." << endl;
			} else {
				cout << "El valor de " << var_name << " no puede ser inferior a " << min << endl;
			}
			cout << "Intentelo nuevamente." << endl;
		}
	} while (num>max || num<min);
	return num;
}

int obtener_edad() {
	int anio;
	int edad;
	anio = ingresar_validar("El año de nacimiento del conductor",2005,1920);
	edad = 2020-anio;
	return edad;
}

int validar_unodos(string uno_string, string dos_string) {
	int uno_dos;
	do {
		cout << "Escriba 1 si " << uno_string << endl;
		cout << "Escriba 2 si " << dos_string << endl;
		cout << "Su opcion: " << endl;
		cin >> uno_dos;
		if (uno_dos!=1 && uno_dos!=2) {
			cout << "Opcion invalida, solo se admiten los valores 1 o 2." << endl;
		}
	} while (uno_dos!=1 && uno_dos!=2);
	return uno_dos;
}

int main(int argc, char * argv[]){
	
	int cdatos, cont0, cont1, cont2, cont3, i;
	float p_ci, p_ed, p_ed2, p_sx;
	cont0 = 0;
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;

	cdatos = ingresar_validar("La cantidad de datos que desea procesar",100,0);

	int ciudades[cdatos], edades[cdatos], sexos[cdatos];

	for (i=0; i<=cdatos-1; i++) {
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "[INGRESANDO DATOS DE CONDUCTOR " << i+1 << "]" << endl;
		edades[i] = obtener_edad();
		sexos[i] = validar_unodos("el sexo del conductor es masculino","el sexo del conductor es femenino");
		ciudades[i] = validar_unodos("la ciudad de registro del carro es Lima","la ciudad de registro del carro es otra");
	}
	for (i=0;i<=cdatos-1;i++) {
		if (edades[i]<25) {
			cont0++;
		}
	}
	p_ed = (cont0/cdatos)*100;
	for (i=0;i<=cdatos-1;i++) {
		if (sexos[i]==2) {
			cont1++;
		}
	}
	p_sx = (cont1/cdatos)*100;
	for (i=0;i<=cdatos-1;i++) {
		if (sexos[i]==1 && edades[i]>=15 && edades[i]<=30) {
			cont2++;
		}
	}
	p_ed2 = (cont2/cdatos)*100;
	for (i=0;i<=cdatos-1;i++) {
		if (ciudades[i]==2) {
			cont3++;
		}
	}
	p_ci = (cont3/cdatos)*100;
	
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "[ESTADISTICAS FINALES]" << endl;
	cout << "" << endl;
	cout << "El " << p_ed << "% de conductores tiene menos de 25 anios." << endl;
	cout << "(" << cont0 << " de " << cdatos << ")" << endl;
	cout << "" << endl;
	cout << "El " << p_ed << "% de conductores es de sexo femenino." << endl;
	cout << "(" << cont1 << " de " << cdatos << ")" << endl;
	cout << "" << endl;
	cout << "El " << p_ed << "% de conductores es de sexo masculino y tiene entre 15 y 30 anios." << endl;
	cout << "(" << cont2 << " de " << cdatos << ")" << endl;
	cout << "" << endl;
	cout << "El " << p_ed << "% de conductores registro su carro fuera de Lima." << endl;
	cout << "(" << cont3 << " de " << cdatos << ")" << endl;
	cout << "" << endl;
	
	return 0;
}