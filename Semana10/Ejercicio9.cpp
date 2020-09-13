#include "iostream"
using namespace std;

int iv(int max, string var_name){
	int num;
	do {
		cout << "Ingrese el valor de" << var_name;
		cin >> num;
		if (num>max) {
			cout << "El valor de" << var_name << " debe ser como maximo " << max << endl;
			cout << "Intentelo nuevamente." << endl;
		}
		if (num<0) {
			cout << "El valor de" << var_name << " no puede ser negativo." << endl;
			cout << "Intentelo nuevamente." << endl;
		}
	} while (num>max || num<0);
	return num;
}

int obtener_notas() {

	int definitiva, nota1, nota2, nota3, nota4;

	nota1 = iv(20," la primera nota");
	nota2 = iv(20," la segunda nota");
	nota3 = iv(20," la tercera nota");
	nota4 = iv(20," la cuarta nota");
	definitiva = int((nota1*0.25+nota2*0.2+nota3*0.25+nota4*0.3)+.5);
	return definitiva;
}

int obtener_codigo() {
	int codigo;
	codigo = iv(999999999," la identificacion del alumno (codigo)");
	return codigo;
}

int main(int argc, char * argv[]){
	int i, n_alumnos, sumatoria_definitivas;
	float promedio_global;
	sumatoria_definitivas = 0;

	cout << "Programa que calcula notas y promedios." << endl;
	n_alumnos = iv(100000,"l numero de alumnos");
	
	int codigos[n_alumnos], definitivas[n_alumnos];

	for (i=0; i<=n_alumnos-1; i++) {
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "[INGRESANDO DATOS DEL ALUMNO " << i+1 << "]" << endl;
		cout << "" << endl;
		codigos[i] = obtener_codigo();
		definitivas[i] = obtener_notas();
	}
	for (i=0; i<=n_alumnos-1; i++) {
		sumatoria_definitivas += definitivas[i];
	}
	promedio_global = sumatoria_definitivas/n_alumnos;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	for (i=0; i<=n_alumnos-1; i++) {
		cout << "El alumno con codigo " << codigos[i] << " tiene como nota definitiva " << definitivas[i] << endl;
	}
	cout << "" << endl;
	cout << "El promedio de todo el grupo en este curso es " << promedio_global << endl;
	
	return 0;
}