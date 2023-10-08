#include <stdio.h>
#include <conio.h>

main(){
	int cont;
	float nota, soma = 0, media;
	
	for (cont = 1; cont <=10; cont++){
		printf("Digite uma nota: ");
		scanf("%f", &nota);
		soma = soma + nota;
		}
	media = soma/10;
	printf("Media geral da turma: %.1f", media);
	}
