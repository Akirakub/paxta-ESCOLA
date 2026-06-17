#include<stdio.h> //biblioteca 
int main(){ //funcao principal

			float horas, salariobr, salarioli1,salarioli2, salariofinal, horasextra, salariotax; //declaracao de variveis
				
				
						printf("coloque o salario bruto:\n"); //mensagem de de insercao
						scanf("%f", &salariobr); //lendo dados
						
						printf("coloque as horas trabalhadas:\n"); //mensagem de inscercao
						scanf("%f", &horas); //lendo dados
						
						if(horas>160){ //se com condicao 
							horasextra=(horas-160); //calculo
							salarioli1=((salariobr/160)*1.50*horasextra); //calculo
							salarioli2=salarioli1+salariobr;//calculo
						}
						else{ //senao
							salarioli2=salariobr; //transferencia de dado
						}
									
							if(800<=salarioli2 && salarioli2<=1600){ //se com consicao com and
								salariotax = salariobr*0.87;
								salariofinal=salarioli2+salariotax;//calculo
							}
							else if(salarioli2>1600){ //se senao para segunda condicao
								
								salariotax= salarioli2 *0.78; //calculo
								salariofinal= salarioli2+salariotax;
							}
							else if(salarioli2<800); { // se senao para terceira condicao
							salariotax= salarioli2; //tranferencia de dado para outro nome
							salariofinal=salariotax+salarioli2;
							}	
							
						printf("o seu salario liquido e: %f", salariofinal); //exibindo o resultado
		
						
	
	
	return 0; //fim
}
