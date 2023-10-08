#include <stdio.h>
#include <conio.h>

main(){
	int cont, idade, soma=0;
	float mediaIdade;
	

	for (cont=1; cont<=10; cont++){
		printf("Digite a idade do aluno: ");
		scanf("%i", &idade);
		soma = soma + idade;
	}
	mediaIdade = soma / 10;
	printf("Media de idade: %.1f", mediaIdade);
}
