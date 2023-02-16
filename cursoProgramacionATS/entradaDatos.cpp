#include<iostream>

using namespace std;

int main(){
	int entero;
	float flotante;
	char digito;
	//acepta hasta 5 decimales
	double doble; 
	
	cout<<"Ingrese un entero: ";
	cin>>entero;
	cout<<"Ingrese un float: ";
	cin>>flotante;
	cout<<"Ingrese un double: ";
	cin>>doble;
	cout<<"Ingrese un char: ";
	cin>>digito;
	
	cout<<"\nEl entero ingresado es: "<<entero;
	cout<<"\nEl float ingresado es: "<<flotante;
	cout<<"\nEl double ingresado es: "<<doble;
	cout<<"\nEl char ingresado es: "<<digito;
	return 0;
}

