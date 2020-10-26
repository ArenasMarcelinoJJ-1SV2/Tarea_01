#include <stdio.h>
#include <conio.h>

int main(){
	printf("Division de valores\n");
	float a, b;
	
	printf("Introzuca el numero que desea dividir: ");
	scanf("%f", &a);
	
	printf("Introduzca el numero por el cual desea dividir: ");
	scanf("%f", &b);
	
	if(b==0){
		printf("ERROR\n");
		printf("Divisor igual a cero");
	}	
	else{
		printf("El resultado de dividir ambos valores es: %.2f", a/b);
	}
	
	getch();
	return 0;
}
