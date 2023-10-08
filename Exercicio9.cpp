#include <stdio.h>
#include <conio.h>

main(){
	float num;
	
	do{
		printf("Digite um numero: ");
		scanf("%f", &num);
		if (num > 0){
			printf("NUMERO POSITIVO!\n");
		}
		if (num < 0){
			printf("NUMERO NEGATIVO!\n");
		}
	}while (num !=0);
	
}
