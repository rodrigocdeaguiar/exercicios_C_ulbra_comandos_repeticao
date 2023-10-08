#include <stdio.h>
#include <conio.h>

main(){
	int cont, num, soma=0;
	
	for (cont = 1; cont<=10; cont++){
		printf("Digite um numero: ");
		scanf("%i", &num);
		soma = soma + num;
	}
	printf("Soma = %i", soma);
}
