#include <stdio.h>

int main(){
	char hola[255];
	char holas;
	
	for(int i = 0; i < 5; i++){
		hola[i] = i;
		printf("Num: %c\n", hola[i]);
	}
	holas = hola[4];
	printf("Num (holas): %c", holas);
}
