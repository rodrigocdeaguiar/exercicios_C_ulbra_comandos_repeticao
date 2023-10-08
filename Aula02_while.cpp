#include <stdio.h>
#include <conio.h>

main(){
	int valor, soma = 0, cont = 0;
	float media;
	
	while (cont < 5){
		printf("Digite um valor: ");
		scanf("%i", &valor);
		cont++;
		soma = soma + valor;
	}
	media = soma/5;
	printf("Media = %.2f", media);
	getch();
}
