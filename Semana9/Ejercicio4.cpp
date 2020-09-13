#include "iostream"
#include <math.h>

using namespace std;

int sumadivpropios(int num){
    int suma = 0;
    for (int a = 1; a <= floor(num/2)+1; a++){
        if (num%a == 0){
            suma += a;
        }
    }
    return suma;
}


int main(int argc, char * argv[]){

    int n, div_i, div_j;

    cout << "Programa que calcula numeros amigos hasta N." << endl;
    cout << "Ingrese el valor de N: "; cin >> n;

    for (int i=1; i<n; i++){
        div_i = sumadivpropios(i);
        for (int j=1; j<n; j++){
            div_j = sumadivpropios(j);
            if (div_i==j && div_j==i && i!=j && i<j){
                cout << i << " y " << j << " son amigos." << endl;
            }
        }
    }
    
    return 0;
}
