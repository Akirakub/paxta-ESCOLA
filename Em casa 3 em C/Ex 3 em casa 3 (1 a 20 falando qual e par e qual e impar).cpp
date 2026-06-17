#include<stdio.h> //biblioteca
int main(){ //funcao principal
			int n=1; //declaracao de variaveis
			
			while(n<=20){ //while mais sua condicao
				if(n%2==0){ //condicao para par
					printf("par %i\n", n); //exibicao de resultado par
				}
				else{ //condicao para impar
					printf("impar %i\n", n); //exibicao de resultado impar
				}
				++n; //incrementacao
			}
	
	return 0; //retorno
}

