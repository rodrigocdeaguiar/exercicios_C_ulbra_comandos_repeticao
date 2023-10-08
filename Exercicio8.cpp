#include <stdio.h>
#include <conio.h>

main(){
	int cont=1;
	float nota, soma = 0, media;
	while(nota >= 0){
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		soma = soma + nota;
		cont ++;
	}
	media = soma / cont;
	printf("Media: %.1f", media);
}
