#include <iostream>
#include <cctype>
using namespace std;

string mayusculas(string s);
string minusculas(string s);


string mayusculas(string s) {
	for(unsigned int i=0;i<s.size();i++)
		s[i] = toupper(s[i]);
	return s;
}

string minusculas(string s) {
	for(unsigned int i=0;i<s.size();i++)
		s[i] = tolower(s[i]);
	return s;
}


int main() {
	string c;
	char opc;
	
	cout << "Programa que convierte una cadena de caracteres a mayusculas o minusculas" << endl;
	cout << "Ingrese la cadena de caracteres: " << endl;
	getline(cin, c);
	
	do {
		cout << "Ingrese A si desea convertir la cadena a mayusculas" << endl;
		cout << "o B si desea convertirla a minusculas." << endl;
		cout << "Su opcion: ";
		cin >> opc;
		if (opc!='A' && opc!='B' && opc!='a' && opc!='b') {
			cout << "" << endl;
			cout << "La opcion ingresada no es valida." << endl;
			cout << "" << endl;
		}
	} while (opc!='A' && opc!='B' && opc!='a' && opc!='b');
	
	switch (opc) {
	case 'A':
		c = mayusculas(c);
		break;
	case 'B':
		c = minusculas(c);
		break;
	case 'a':
		c = mayusculas(c);
		break;
	case 'b':
		c = minusculas(c);
		break;
	}

	cout << endl;
	cout << "La cadena convertida es:" << endl;
	cout << c << endl;
	
	return 0;
}
