#include <stdio.h>
#include <conio.h>

main(){
	int num_tabuada, var_tabuada, result;
	printf("Digite um numero entre 0 e 10 para calcular a tabuada\n");
	scanf("%i", &num_tabuada);
	if (num_tabuada >=1 && num_tabuada <=10){
		for(var_tabuada=1; var_tabuada<=10; var_tabuada++){
			result = num_tabuada*var_tabuada;
			printf("%i * %i = %i\n", num_tabuada, var_tabuada, result);
	}
		}
		
	else{
		printf("Valor invalido!");
	}	
	
}
