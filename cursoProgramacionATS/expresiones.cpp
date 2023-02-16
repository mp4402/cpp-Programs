#include<iostream>

using namespace std;

int main(){
	float a,b;
	
	cout<<"Ingrese el valor de a: ";
	cin>>a;
	
	cout<<"Ingrese el valor de b: ";
	cin>>b;
	
	/*para redonder el resultado, antes del cout final, podemos poner cout.precision(n), donde n es el número que queremos redonder
		Por ejemplo:
		cout.precision(2);
		cout<<"El resultado es: "<<(a/b)+1;
	*/
	//cout.precision(2);
	cout<<"\nEl resultado de (a/b)+1 es: "<<(a/b)+1;
	
	return 0;
}
