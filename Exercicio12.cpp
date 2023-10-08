#include <stdio.h>
#include <conio.h>

main(){
	int m, n;
	
	do{
		printf("Digite um numero inteiro: ");
		scanf("%i", &m);
		printf("Digite outro numero inteiro: ");
		scanf("%i", &n);
		if (m < n){
			printf("CRESCENTE \n", m, n);
		}
		if (m > n){
			printf("DECRESCENTE \n", m, n);
		}
	} while (m !=n);
	
}
