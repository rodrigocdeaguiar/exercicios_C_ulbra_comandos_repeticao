#include <stdio.h>
#include <conio.h>

main(){
	int x, n;
	do {
		printf("Digite um numero inteiro entre 1 e 10: ");
		scanf("%i", &n);
		if (n <=10 || n> 10){
			printf("Valor fora do intervalo permitido\n.", n);
		}
	} while (n<=0 || n>10);
	
	for (x=1; x<=10; x=x+1){
		printf("%i * %i = %i\n", x, n, x*n);
	}
}
