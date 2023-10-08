#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int senha = 1234, cont = 0, senhadigitada = 0;
	while(senha != senhadigitada){
		printf("Digite a senha: ");
		scanf("%i", &senhadigitada);
		cont++;
		if (senha == senhadigitada){
			printf("ACESSO PERMITIDO \n");
		}
		if (senha != senhadigitada){
			printf("ACESSO NEGADO \n");
		}
	}
	printf("Numero de tentativas: %i", cont);
}
