// Este codigo ha sido generado por el modulo psexport 20180802-l64 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
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
int iv(int max, SIN_TIPO var_name);
int obtener_notas();
int obtener_codigo();

int iv(int max, SIN_TIPO var_name) {
	int num;
	do {
		cout << "Ingrese el valor de" << var_name;
		cin >> num;
		if (num>max) {
			cout << "El valor de" << var_name << " debe ser como máximo " << max << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
		if (num<0) {
			cout << "El valor de" << var_name << " no puede ser negativo." << endl;
			cout << "Inténtelo nuevamente." << endl;
		}
	} while (num>max || num<0);
	return num;
}

int obtener_notas() {
	int definitiva;
	int nota1;
	int nota2;
	int nota3;
	int nota4;
	nota1 = iv(20," la primera nota");
	nota2 = iv(20," la segunda nota");
	nota3 = iv(20," la tercera nota");
	nota4 = iv(20," la cuarta nota");
	definitiva = int((nota1*0.25+nota2*0.2+nota3*0.25+nota4*0.3)+.5);
	return definitiva;
}

int obtener_codigo() {
	int codigo;
	codigo = iv(999999999," la identificación del alumno (código)");
	return codigo;
}

int main() {
	int codigos[ARREGLO_MAX];
	int definitivas[ARREGLO_MAX];
	int i;
	int n_alumnos;
	float promedio_global;
	int sumatoria_definitivas;
	sumatoria_definitivas = 0;
	cout << "Programa que calcula notas y promedios." << endl;
	n_alumnos = iv(100000,"l número de alumnos");
	for (i=0;i<=n_alumnos-1;i++) {
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "[INGRESANDO DATOS DEL ALUMNO " << i+1 << "]" << endl;
		cout << "" << endl;
		codigos[i] = obtener_codigo();
		definitivas[i] = obtener_notas();
	}
	for (i=0;i<=n_alumnos-1;i++) {
		sumatoria_definitivas = sumatoria_definitivas+definitivas[i];
	}
	promedio_global = sumatoria_definitivas/n_alumnos;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	for (i=0;i<=n_alumnos-1;i++) {
		cout << "El alumno con código " << codigos[i] << " tiene como nota definitiva " << definitivas[i] << endl;
	}
	cout << "" << endl;
	cout << "El promedio de todo el grupo en este curso es " << promedio_global << endl;
	return 0;
}

