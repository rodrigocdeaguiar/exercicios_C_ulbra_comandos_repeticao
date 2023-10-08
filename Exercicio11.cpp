#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
   int n1,n2;
   float r;
   char resp='s';
   while ((resp=='s') ||(resp=='S'))
   {
     printf("Informe um valor inteiro: ");
     scanf("%d",&n1);
     n2=0;
     while(n2==0)
     {
           printf("Informe outro valor inteiro: ");
	        scanf("%d",&n2);
	        fflush(stdin);  //limpa o buffer do teclado
     	     if (n2==0)
     	        printf("Valor invclido\n");
     }
     r=(float)n1/n2;
     printf("%d/%d=%.2f\n",n1,n2,r);
     getch();
     printf("Deseja continuar (S/N)? ");
     scanf("%c",&resp);
     fflush(stdin); //limpa o buffer do teclado
   }
}

