#include "iostream"
using namespace std;

int main(int argc, char * argv[]){
	int i;
	int num;
	i = 1;
	cout << "Ingrese el numero que desee evaluar: " << endl;
	cin >> num;
	if (num<3000) {
		while (i<=num/2) {
			if (num%i==0) {
				cout << i << endl;
			}
			i = i+1;
		}
		cout << num << endl;
	} else {
		cout << "Numero fuera de rango." << endl;
	}
	return 0;
}

