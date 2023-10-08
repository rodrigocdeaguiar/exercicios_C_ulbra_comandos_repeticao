#include <stdio.h>
#include <conio.h>

# define tabuada 9

main(){
	int cont, resultado;
	for (cont = 1; cont <=10; cont++){
		resultado = cont*tabuada;
		printf("%i * %i = %i \n", cont, tabuada, resultado);
	}
}
