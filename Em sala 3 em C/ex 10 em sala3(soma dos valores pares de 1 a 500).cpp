#include<stdio.h> //biblioteca
int main(){ //funcao principal
	int n1=2, r=0; //declaracao e inicializacao (n1 começa em 2)
		while(n1<=500){ //while mais sua condicao
			if(n1%2==0){ //condicao para par
				r=n1+r; //acumulador da soma
				n1=n1+2; //incrementacao de dois em dois
				
			}
		}
				printf("o valor da soma dos numeros pares ate 500:%i\n", r); //exibicao do resultado final
	return 0; //retorno
}

