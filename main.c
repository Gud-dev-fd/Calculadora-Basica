#include <stdio.h>

int main() {
	// %d Significa para los numeros.
	int num1, num2, resultado, decision, num3, num4, resultado2;
	printf("Ingresa un numero: \n");
	scanf("%d",&num1); // & se usa para guardar informacion en una variable, (hay mas formas)
	printf("Ingresa el segundo numero: \n");
	scanf("%d",&num2);
	resultado = num1 + num2;
	printf("El resultado es: %i ",resultado);
	printf(" ");
	printf("Quieres seguir usando la calculadora? 1 para seguir ");
	//Es muy basica, solo le estoy enseñando a un amigo
	scanf("%d",&decision);
	if(decision == 1) {    //if() sirve para dar 1 o multiples opciones, por ejemplo = si juan tiene 2 manzanas sacarle 1
    printf("Ingresa un numero: \n");
	scanf("%d",&num3);
	printf("Ingresa el segundo numero: \n");
	scanf("%d",&num4);
	resultado2 = num3 + num4;
	printf("El resultado es: %d ",resultado2);
	}else {
		printf("Ok bye!");
	}
}

// Yo uso replit, pero para compilar deberan usar gcc
