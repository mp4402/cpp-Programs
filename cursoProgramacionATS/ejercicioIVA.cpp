#include<iostream>

using namespace std;

int main(){
	float precio;
	cout<<"Ingrese el precio del producto: ";
	cin>>precio;
	
	cout<<"\nEl precio al aplicarle el iva es: "<<precio+(precio*0.12);
	return 0;
}
