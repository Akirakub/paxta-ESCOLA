#include<stdio.h> //biblioteca
int main(){ //funcao principal
    int x, y, r, q=1; //declaracao de variaveis
    char c; //variavel para o operador
    
    while(q<=1000000000){ //loop para repetir
        printf("\ncoloque o operador ou s para sair:\n"); //pergunta opcao
        scanf(" %c", &c); //leitura do operador
        
        if(c== 's' || c== 'S'){ //caso queira sair
            printf("calculadora encerrada!"); //mensagem de fim
            break; //sai do loop
        }
        else{ //caso nao queira sair
            printf("coloque o valor do a e b:"); //pede os numeros
            scanf("%i %i", &x, &y); //leitura de x e y
            
            switch(c){ //inicio da escolha
                case'+': //caso soma
                    r=x+y; //faz a conta
                    printf("%i + %i = %i\n", x, y, r); //exibe resultado
                    break;
                case'-': //caso subtracao
                    r=x-y; //faz a conta
                    printf("%i - %i = %i\n", x, y, r); //exibe resultado
                    break;
                case'*': //caso multiplicacao
                    r=x*y; //faz a conta
                    printf("%i * %i = %i\n", x, y, r); //exibe resultado
                    break;
                case'/': //caso divisao
                    r=x/y; //faz a conta
                    printf("%i / %i = %i\n", x, y, r); //exibe resultado
                    break;
                default: //caso operador errado
                    printf("operador invalido!"); //avisa erro
                    break;		
            }	
        }
    }
    return 0; //retorno
}

