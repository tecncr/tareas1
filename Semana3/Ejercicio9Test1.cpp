#include <iostream>
using namespace std;
int main(){
int b10,b20,b50,b100,b200,t;
cout<<"ingrese la cantidad de su dinero:"<<endl;
cin>>t;
cout<<t/3.20<<" dolares"<<endl;
b200=(t/200);(t=t%200);
b100=(t/100);(t=t%100);
b50=(t/50); (t=t%50);
b20=(t/20); (t=t%20);
b10=(t/10); (t=t%10);
cout<<"billetes de 200 soles:  "<<b200<<endl;
cout<<"billetes de 100 soles:  "<<b100<<endl;
cout<<"billetes de  50 soles:  "<<b50<<endl;
cout<<"billetes de  20 soles:  "<<b20<<endl;
cout<<"billetes de  10 soles:  "<<b10<<endl;
cout<<"monedas  de   1 sol  :  "<<t%10<<endl<<endl;
cin.ignore(); return 0;
}