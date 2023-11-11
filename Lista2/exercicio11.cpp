//Jéssica Laís da Mota Freire. construa um algoritmo que receba como entrada três valores e os imprima em ordem crescente.//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
    
	int num1,num2,num3,x=0;

    printf("Digite 3 números para organizar em ordem crescente.\n");
	
	printf("Primeiro número:");
    scanf("%d",&num1);

    printf("Segundo número:");
    scanf("%d",&num2);

    printf("Terceiro número:");
    scanf("%d",&num3);

    if(num1>num2){
        x=num1;
        num1=num2;
        num2=x;
    }if(num2 <= num3){
        printf("A ordem crescente é: %d %d %d\n",num1,num2,num3);
    }else
    	{if(num1 <= num3){
            printf("A ordem crescente é: %d %d %d\n",num1,num2,num3);
        }else
        {
            printf("A ordem crescente é: %d %d %d\n",num1,num2,num3);
        }
    }
    return 0;
}
