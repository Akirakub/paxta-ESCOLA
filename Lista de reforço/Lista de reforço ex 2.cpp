#include<stdio.h> //biblioteca principal
int main(){ //funcao principal
				int a[5], i, aux, j; //declaracao de variaveis
			
			for(i=0; i<5; ++i){ //for para ler matriz
				printf("coloque os numeros para ordernar:"); //mensagem
				scanf("%i", &a[i]); //lendo valores
			}
			
			for(i=0; i<4; ++i) //primeiro indice 
				for(j=i+1; j<5; j++){  //segundo indice
					if(a[i]>a[j]){ //se primeiro indice for maior que o segundo
						
						aux=a[i]; // troca com auxiliar
						a[i]=a[j]; //passa do j pro i
						a[j]=aux; //do aux pro j
					}
				}
				for(i=0; i<5; ++i){ //for pra exibir resultado
					printf("%i ", a[i]); //mensagem de exibicao
				} 
			
	return 0; //fim
}
