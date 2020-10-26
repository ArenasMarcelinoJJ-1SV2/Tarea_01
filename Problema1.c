#include <stdio.h>
#include <conio.h>

int main(){
	float a, b;
	
	printf("Intriduce un valor, ya sea decimal o entero: ");
	scanf("%f", &a);
	
	printf("Introduce un segundo valor: ");
	scanf("%f", &b);
	
	if(a>b){
		printf("El numero mayor es: %.2f", a);
	}
	else if(a==b){
		printf("Ambos valores son iguales");
	}
	else{
		printf("El numero mayor es: %.2f", b);
	}
	
	getch();
	return 0;
}
