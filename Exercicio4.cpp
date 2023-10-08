#include <stdio.h>
#include <conio.h>

main(){
	int cont, num;
	for(cont=1; cont<=10; cont++){
		printf("Digite um numero: ");
		scanf("%i", &num);
		if (num % 2 == 0){
			printf("NUMERO PAR!\n");
		}
		if (num % 2 == 1){
			printf("NUMERO IMPAR!\n");
		}
	}
}
