#include <stdio.h>
#include <string.h>

//void eval(char* i, c){
	// (a+b) numeros: traer los ultimos 2. operadores: traer el ultimo
	// [(a+b)*(d+a)]
//}

void leer_name(char* nombre){
	int i[255];
	i[0] = 0;
	int numeros[255];
	char operadores[255];
	int cont_numeros = 0;
	int cont_operadores = 0;
	int cont = 0;
	int bandera = 0;
	int bandera_numero = 0;
	int bandera_mult = 0;
	int j = 0;
	int temporal;
	while(*(nombre+1) != 0 && bandera == 0){
		switch (*nombre){
			case 40:// (
				printf("Desde la funcion:  %c\n", *nombre);
				i[cont++] = 1;
				bandera_numero = 0;
			break;
			case 41:// )
				printf("Desde la funcion:  %c\n", *nombre);
				if (i[--cont] == 1){
					i[cont] = 0;		
					bandera_numero = 0;
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					// sacar operador
					char op = operadores[--cont_operadores];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					switch(op){
						case 42:
						   printf("Operador: *\n");
						   r = a*b;
						break;
						case 43:
						   //printf("Operador: +\n");
						   r = a+b;
						break;
						case 45:
					           //printf("Operador: -\n");
						   r = a-b;
						break;
						case 47:
						   //printf("Operador: /\n");
						   r = a/b;
						default:
						   break;
					}
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
				}
				else 
				{
					bandera = 1;
			         	printf("ERROR ARITMETICO\n");
				}
			break;
			case 91:// [
				printf("Desde la funcion:  %c\n", *nombre);
				i[cont] = 2;
				cont = cont + 1;
				bandera_numero = 0;
			break;
			case 93:// ]
				printf("Desde la funcion:  %c\n", *nombre);
				if (i[--cont] == 2){
					i[cont] = 0;
					bandera_numero = 0;
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					// sacar operador
					char op = operadores[--cont_operadores];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					switch(op){
						case 42:
						   printf("Operador: *\n");
						   r = a*b;
						break;
						case 43:
						   //printf("Operador: +\n");
						   r = a+b;
						break;
						case 45:
					           //printf("Operador: -\n");
						   r = a-b;
						break;
						case 47:
						   //printf("Operador: /\n");
						   r = a/b;
						default:
						   break;
					}
					numeros[cont_numeros++] = r;	
					printf("La operacion da como resultado %d \n", r);	
				}
				else 
				{
					bandera = 1;
			         	printf("ERROR ARITMETICO\n");
				}
			break;
			case 48:
				printf("Numero: 0\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros++] = temporal;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 49:
				printf("Numero: 1\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 50:
				printf("Numero: 2\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 51:
				printf("Numero: 3\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 52:
				printf("Numero: 4\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 53:
				printf("Numero: 5\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 54:
				printf("Numero: 6\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 55:
				printf("Numero: 7\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 56:
				printf("Numero: 8\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 57:
				printf("Numero: 9\n");
				if (bandera_numero == 1){
					temporal = (*nombre - 48);
					numeros[(cont_numeros-1)] = (numeros[cont_numeros-1] * 10) + temporal;
				}
				else{
					temporal = (*nombre - 48);
					numeros[cont_numeros] = temporal;
					cont_numeros = cont_numeros+1;
				}
				if (bandera_mult == 1){
					// sacar operandos (numeros)
					int b = numeros[--cont_numeros];
					int a = numeros[--cont_numeros];
					operadores[cont_operadores] = '$';
					// operar
					int r = 0;
					r = a*b;
					numeros[cont_numeros++] = r;
					printf("La operacion da como resultado %d \n", r);
					bandera_mult = 0;
				}
				bandera_numero = 1;
			break;
			case 42:
				printf("Operador: *\n");
				operadores[cont_operadores] = *nombre;
				cont_operadores = cont_operadores + 1;
				bandera_mult = 1;
				bandera_numero = 0;
			break;
			case 43:
				printf("Operador: +\n");
				operadores[cont_operadores] = *nombre;
				cont_operadores = cont_operadores + 1;
				bandera_numero = 0;
			break;
			case 45:
				printf("Operador: -\n");
				operadores[cont_operadores] = *nombre;
				cont_operadores = cont_operadores + 1;
				bandera_numero = 0;
			break;
			case 47:
				printf("Operador: /\n");
				operadores[cont_operadores] = *nombre;
				cont_operadores = cont_operadores + 1;
				bandera_numero = 0;
			break;
    		default:
			break;
		}
		nombre = (nombre+1);
	}
	if (i[0] == 0){	
		if (operadores[0] != 36){	
	           // sacar operandos (numeros)
		   int b = numeros[--cont_numeros];
		   int a = numeros[--cont_numeros];
		// sacar operador
		   char op = operadores[--cont_operadores];
		   operadores[cont_operadores] = '$';
		// operar
		   int r = 0;
		   switch(op){
			   case 42:
			      //printf(" AFUERAOperador: *\n");
			      r = a*b;
			   break;
			   case 43:
			      //printf("Operador: +\n");
			      r = a+b;
			   break;
			   case 45:
		              //printf("Operador: -\n");
			      r = a-b;
			   break;
			   case 47:
			      //printf("Operador: /\n");
			      r = a/b;
			   default:
			      break;
		   }
		   numeros[cont_numeros++] = r;	
		   printf("La operacion da como resultado %d \n", r);	
		}
		printf("EXPERSION CORRECTA\n");
		printf("RESULTADO ES: %d\n", numeros[0]);
		   
	}else {
		printf("EXPERSION INCORRECTA\n");				
	}
	
}

int main(){
	char name[30];
	printf("Enter name: ");
	fgets(name, sizeof(name), stdin); // read string
	printf("Your name is: ");
	puts(name);
	printf("\n");
	int len;
	len = strlen(name);
	printf("El largo es: %d\n\n", len);
	leer_name(name);	
	return 0;
}
