#include <stdio.h>
#include <conio.h>

main(){
	int cont, num;
	for (cont=1; cont<=5; cont++){
		printf("Digite um numero: ");
		scanf("%i", &num);
		if (num == 0){
			printf("NUMERO NULO.\n");
		}
		if (num < 0){
			printf("NUMERO NEGATIVO.\n");
		}
		if (num > 0){
			printf("NUMERO POSITIVO.\n");
		}
	}
}
