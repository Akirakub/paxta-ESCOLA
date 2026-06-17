#include<stdio.h> //bibiloteca
int main(){ //funcao principal
					int mes; //declaracao de varieaveis
							
							printf("coloque o numero do seu mes:"); //mensagem para inscerçao de dados
							scanf("%i", &mes);  //lendo dados
					
					switch(mes){ //caso
						
						case 1:  //seja
						printf("Janeiro"); //mensagem de retorno do seja
						break; //break para nao continuar os outros sejas
						
						case 2: //seja
						printf("Fevereiro");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						 
						 case 3: //seja
						printf("Março");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 4://seja
						printf("Abril");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 5://seja
						printf("Maio");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 6://seja
						printf("Junho");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 7://seja
						printf("Julho");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 8://seja
						printf("Agosto");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 9://seja
						printf("Setembro");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 10://seja
						printf("Outubro");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 11://seja
						printf("Novembro");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						case 12://seja
						printf("Dezembro");//mensagem de retorno do seja
						break;//break para nao continuar os outros sejas
						
						default: //default para outros valors
						printf("mes invalido! Tente novamente"); //mensagem de retorno do default
						break;	//break para nao continuar as outras ordens
					}
		
		
	
	
	return 0; //fim
}
