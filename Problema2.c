#include <stdio.h>
#include <conio.h>

int main(){
	
	int value, a;
	
	printf("Introduce un valor entero: ");
	scanf("%d", &value);
	
	a=value%2;
	
	if(a==0){
		printf("El valor introducido: %d, es par.", value);
	}	

	else{
		printf("El valor introducido: %d, es impar.", value);
	}
	
	getch();
	return 0;	
}
