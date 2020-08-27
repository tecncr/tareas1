#include "iostream"
using namespace std;

int main(int argc, char* argv[]){

	double nueva_gravedad, peso_tierra, peso_lugar;
	char seleccion1, seleccion2;
	bool condicion1, condicion2;
	string lugar_seleccionado;

	cout << "Programa que calcula su peso en otro lugar del sistema solar." << endl;
	cout << "Ingrese su peso en la tierra: ";
	cin >> peso_tierra;

	do {

		cout << endl <<  "Seleccione el lugar del sistema solar en el que le gustaria conocer su peso." << endl;
		cout << "Lugares disponibles: Sol, Luna, Saturno, Mercurio, Marte, Urano, Venus," << endl;
		cout << "Jupiter, Neptuno. Ingrese la primera letra del lugar seleccionado: ";
		cin >> seleccion1;

		switch (seleccion1) {
		case 's':
			do {

				cout << endl << "Se ha detectado una ambiguedad." << endl;
				cout << "Para indicar si se refiere al Sol o a Saturno, por favor indique" << endl;
				cout << "la segunda letra del lugar donde desee conocer su peso (o/a): ";
				cin >> seleccion2;

				switch (seleccion2) {
				case 'o':
					nueva_gravedad = 27.94;
					lugar_seleccionado = "Sol";
					break;
				case 'a':
					nueva_gravedad = 1.15;
					lugar_seleccionado = "Saturno";
					break;
				case 'O':
					nueva_gravedad = 27.94;
					lugar_seleccionado = "Sol";
					break;
				case 'A':
					nueva_gravedad = 1.15;
					lugar_seleccionado = "Saturno";
					break;
				default:
					cout << endl << "La opcion ingresada es invalida. Solo se admiten los valores o, a." << endl;
				}
			} while (seleccion2!='o' and seleccion2!='a' and seleccion2!='O' and seleccion2!='A');
			break;
		case 'm':
			do {
				cout << endl << "Se ha detectado una ambiguedad." << endl;
				cout << "Para indicar si se refiere a Marte o a Mercurio, por favor indique" << endl;
				cout << "la segunda letra del lugar donde desee conocer su peso (a/e): ";
				cin >> seleccion2;
				switch (seleccion2) {
				case 'a':
					nueva_gravedad = 0.38;
					lugar_seleccionado = "Marte";
					break;
				case 'e':
					nueva_gravedad = 0.37;
					lugar_seleccionado = "Mercurio";
					break;
				case 'A':
					nueva_gravedad = 0.38;
					lugar_seleccionado = "Marte";
					break;
				case 'E':
					nueva_gravedad = 0.37;
					lugar_seleccionado = "Mercurio";
					break;
				default:
					cout << endl << "La opcion ingresada es invalida. Solo se admiten los valores a, e." << endl;
				}
			} while (seleccion2!='o' and seleccion2!='a' and seleccion2!='O' and seleccion2!='A');
			break;
		case 'l':
			nueva_gravedad = 0.17;
			lugar_seleccionado = "Luna";
			break;
		case 'u':
			nueva_gravedad = 1.17;
			lugar_seleccionado = "Urano";
			break;
		case 'v':
			nueva_gravedad = 0.88;
			lugar_seleccionado = "Venus";
			break;
		case 'j':
			nueva_gravedad = 2.64;
			lugar_seleccionado = "Jupiter";
			break;
		case 'n':
			nueva_gravedad = 1.18;
			lugar_seleccionado = "Neptuno";
			break;
		case 'S':
			do {
				cout << endl << "Se ha detectado una ambiguedad." << endl;
				cout << "Para indicar si se refiere al Sol o a Saturno, por favor indique" << endl;
				cout << "la segunda letra del lugar donde desee conocer su peso (o/a): ";
				cin >> seleccion2;
				switch (seleccion2) {
				case 'o':
					nueva_gravedad = 27.94;
					lugar_seleccionado = "Sol";
					break;
				case 'a':
					nueva_gravedad = 1.15;
					lugar_seleccionado = "Saturno";
					break;
				case 'O':
					nueva_gravedad = 27.94;
					lugar_seleccionado = "Sol";
					break;
				case 'A':
					nueva_gravedad = 1.15;
					lugar_seleccionado = "Saturno";
					break;
				default:
					cout << endl << "La opcion ingresada es invalida. Solo se admiten los valores o, a." << endl;
				}
			} while (seleccion2!='o' and seleccion2!='a' and seleccion2!='O' and seleccion2!='A');
			break;
		case 'M':
			do {
				cout << endl <<  "Se ha detectado una ambiguedad." << endl;
				cout << "Para indicar si se refiere a Marte o a Mercurio, por favor indique" << endl;
				cout << "la segunda letra del lugar donde desee conocer su peso (a/e): ";
				cin >> seleccion2;
				switch (seleccion2) {
				case 'a':
					nueva_gravedad = 0.38;
					lugar_seleccionado = "Marte";
					break;
				case 'e':
					nueva_gravedad = 0.37;
					lugar_seleccionado = "Mercurio";
					break;
				case 'A':
					nueva_gravedad = 0.38;
					lugar_seleccionado = "Marte";
					break;
				case 'E':
					nueva_gravedad = 0.37;
					lugar_seleccionado = "Mercurio";
					break;
				default:
					cout << endl << "La opcion ingresada es invalida. Solo se admiten los valores a, e." << endl;
				}
			} while (seleccion2!='o' and seleccion2!='a' and seleccion2!='O' and seleccion2!='A');
			break;
		case 'L':
			nueva_gravedad = 0.17;
			lugar_seleccionado = "Luna";
			break;
		case 'U':
			nueva_gravedad = 1.17;
			lugar_seleccionado = "Urano";
			break;
		case 'V':
			nueva_gravedad = 0.88;
			lugar_seleccionado = "Venus";
			break;
		case 'J':
			nueva_gravedad = 2.64;
			lugar_seleccionado = "Jupiter";
			break;
		case 'N':
			nueva_gravedad = 1.18;
			lugar_seleccionado = "Neptuno";
			break;
		default:
			cout << endl << "La opcion ingresada es invalida. Por favor intentelo nuevamente." << endl << endl;
		}

		condicion1 = seleccion1!='s' and seleccion1!='l' and seleccion1!='m' and seleccion1!='u' and seleccion1!='v' and seleccion1!='j' and seleccion1!='n';
		condicion2 = seleccion1!='S' and seleccion1!='L' and seleccion1!='M' and seleccion1!='U' and seleccion1!='V' and seleccion1!='J' and seleccion1!='N';
	
	} while (condicion1 and condicion2);

	peso_lugar = peso_tierra*nueva_gravedad;

	cout << endl;
	cout << "Su peso en " << lugar_seleccionado << " es: " << peso_lugar << endl << endl;

	return 0;
}