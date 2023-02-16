#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	cout<<"Ingrese su sexo: ";
	cin>>sexo;
	cout<<"Ingrese su altura (m): ";
	cin>>altura;
	
	cout<<"\nEdad: "<<edad<<endl;
	cout<<"Sexo: "<<sexo<<endl;
	cout<<"Altura (m): "<<altura;
	
	return 0;
}
