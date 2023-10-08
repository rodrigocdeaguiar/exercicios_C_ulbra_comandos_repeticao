#include <stdio.h>
#include <conio.h>

main(){
	int num;
	do{
		printf("Digite um numero inteiro: ");
		scanf("%i", &num);
		if (num == 0){
			break;
		}
		if (num % 2 == 0){
			printf("Numero par!\n");
		}
		if (num % 2 == 1){
			printf("Numero impar!\n");
		}
	} while (num > 0);
}
