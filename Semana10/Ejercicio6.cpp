// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// En C++ no se puede dimensionar un arreglo estático con una dimensión no constante.
// PSeInt sobredimensionará el arreglo utilizando un valor simbólico ARREGLO_MAX.
// Sería posible crear un arreglo dinámicamente con los operadores new y delete, pero
// este mecanismo aún no está soportado en las traducciones automáticas de PSeInt.
#define ARREGLO_MAX 100

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
int ingresar_validar(SIN_TIPO var_name, int max, int min);
int obtener_edad();
int validar_unodos(SIN_TIPO uno_string, SIN_TIPO dos_string);

int ingresar_validar(SIN_TIPO var_name, int max, int min) {
	int num;
	do {
		cout << "Ingrese " << var_name << ": ";
		cin >> num;
		if (num>max) {
			cout << var_name << " no puede ser mayor que " << max << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
		if (num<min) {
			if (min==0) {
				cout << "El valor de " << var_name << " no puede ser negativo." << endl;
			} else {
				cout << "El valor de " << var_name << " no puede ser inferior a " << min << endl;
			}
			cout << "Inténtelo nuevamente." << endl;
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

int validar_unodos(SIN_TIPO uno_string, SIN_TIPO dos_string) {
	int uno_dos;
	do {
		cout << "Escriba 1 si " << uno_string << endl;
		cout << "Escriba 2 si " << dos_string << endl;
		cout << "Su opción: " << endl;
		cin >> uno_dos;
		if (uno_dos!=1 && uno_dos!=2) {
			cout << "Opción inválida, solo se admiten los valores 1 o 2." << endl;
		}
	} while (uno_dos!=1 && uno_dos!=2);
	return uno_dos;
}

int main() {
	int cdatos;
	int ciudades[ARREGLO_MAX];
	int cont0;
	int cont1;
	int cont2;
	int cont3;
	int edades[ARREGLO_MAX];
	int i;
	float p_ci;
	float p_ed;
	float p_ed2;
	float p_sx;
	int sexos[ARREGLO_MAX];
	cont0 = 0;
	cont1 = 0;
	cont2 = 0;
	cont3 = 0;
	cdatos = ingresar_validar("La cantidad de datos que desea procesar",1000000,0);
	for (i=0;i<=cdatos-1;i++) {
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "[INGRESANDO DATOS DE CONDUCTOR " << i+1 << "]" << endl;
		edades[i] = obtener_edad();
		sexos[i] = validar_unodos("el sexo del conductor es masculino","el sexo del conductor es femenino");
		ciudades[i] = validar_unodos("la ciudad de registro del carro es Lima","la ciudad de registro del carro es otra");
	}
	for (i=0;i<=cdatos-1;i++) {
		if (edades[i]<25) {
			cont0 = cont0+1;
		}
	}
	p_ed = (cont0/cdatos)*100;
	for (i=0;i<=cdatos-1;i++) {
		if (sexos[i]==2) {
			cont1 = cont1+1;
		}
	}
	p_sx = (cont1/cdatos)*100;
	for (i=0;i<=cdatos-1;i++) {
		if (sexos[i]==1 && edades[i]>=15 && edades[i]<=30) {
			cont2 = cont2+1;
		}
	}
	p_ed2 = (cont2/cdatos)*100;
	for (i=0;i<=cdatos-1;i++) {
		if (ciudades[i]==2) {
			cont3 = cont3+1;
		}
	}
	p_ci = (cont3/cdatos)*100;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "[ESTADÍSTICAS FINALES]" << endl;
	cout << "" << endl;
	cout << "El " << p_ed << "% de conductores tiene menos de 25 años." << endl;
	cout << "(" << cont0 << " de " << cdatos << ")" << endl;
	cout << "" << endl;
	cout << "El " << p_ed << "% de conductores es de sexo femenino." << endl;
	cout << "(" << cont1 << " de " << cdatos << ")" << endl;
	cout << "" << endl;
	cout << "El " << p_ed << "% de conductores es de sexo masculino y tiene entre 15 y 30 años." << endl;
	cout << "(" << cont2 << " de " << cdatos << ")" << endl;
	cout << "" << endl;
	cout << "El " << p_ed << "% de conductores registró su carro fuera de Lima." << endl;
	cout << "(" << cont3 << " de " << cdatos << ")" << endl;
	cout << "" << endl;
	return 0;
}

