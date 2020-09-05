#include "iostream"
using namespace std;

int main() {
	int creditos, total;
	string curso;
	total = 0;
	cout << "Validacion de creditos matriculados" << endl;
	do {
		cout << "Ingrese el nombre del curso en el que desea matricularse o ingrese x para detener el ingreso de cursos." << endl;
		cout << "Curso:" << endl;
		cin >> curso;
		if (curso!="x") {
			cout << "Ingrese el numero de creditos del curso " << curso << endl;
			cin >> creditos;
			if (total+creditos>22) {
				cout << "No se pudo matricular en el curso " << curso << " porque al hacerlo excederia el maximo de creditos permitidos (22)." << endl;
			} else {
				total = total+creditos;
			}
		}
	} while (!(total>=22 || curso=="x"));
	cout << "El total de los creditos matriculados es: " << total << endl;
	return 0;
}