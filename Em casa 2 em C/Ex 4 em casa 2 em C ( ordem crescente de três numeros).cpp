#include<stdio.h>
int main(){ //funcao principal
			float n1,n2,n3,a,b,c; //declaracao de variaveis
			
			printf("coloque os numeros:\n"); // mensagem para colocar os dados da funçao
			scanf("%f %f %f", &n1, &n2, &n3); // lendo as variaveis colocadas
			
			if(n1>n2 && n2>n3){ //se com os comparativos
				a=n1; //trancrevendo o numero para a letra certa
				b=n2;//trancrevendo o numero para a letra certa
				c=n3;//trancrevendo o numero para a letra certa
			}// fecha o se
			
			 else if(n2>n1 && n1>n3){//se com os comparativos
				a=n2;//trancrevendo o numero para a letra certa
				b=n1;//trancrevendo o numero para a letra certa
				c=n3;//trancrevendo o numero para a letra certa
			}// fecha o se
			
	    	else if(n1>n3 && n3>n2){//se com os comparativos
				a=n1;//trancrevendo o numero para a letra certa
				b=n2;//trancrevendo o numero para a letra certa
				c=n3;//trancrevendo o numero para a letra certa
			}// fecha o se
	
	    	else if(n3>n1 && n1>n2){//se com os comparativos
					a=n3;//trancrevendo o numero para a letra certa
					b=n1;//trancrevendo o numero para a letra certa
					c=n2;//trancrevendo o numero para a letra certa
				}
	
	    	else if(n3>n2 && n2>n1){//se com os comparativos
					a=n3;//trancrevendo o numero para a letra certa
					b=n2;//trancrevendo o numero para a letra certa
					c=n1;//trancrevendo o numero para a letra certa
				} // fecha o se
		
	        else if(n2>n3 && n3>n1){//se com os comparativos
					a=n2;//trancrevendo o numero para a letra certa
					b=n3;//trancrevendo o numero para a letra certa
					c=n1;//trancrevendo o numero para a letra certa
				}// fecha o se
		
		
			printf("os numeros a b c sao respectivamente %f %f %f" ,a, b ,c);// mensagem de retorno com os valores ordenados
	
	return 0; //finalizando funcao 
}
