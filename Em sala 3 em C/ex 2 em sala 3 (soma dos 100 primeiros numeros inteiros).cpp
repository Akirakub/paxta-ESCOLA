#include<stdio.h> //biblioteca
int main(){ //funcao principal
		int n=1; //declaracao de variaveis
			while(n<=19){ //while mais sua condicao
				if(n%2==1){ //condicao para impar
					printf("impar: %i\n", n); //exibicao de resultado impar
					n=n+2; //incrementacao de dois em dois
					
				}
			}
	
	return 0; //retorno
}

