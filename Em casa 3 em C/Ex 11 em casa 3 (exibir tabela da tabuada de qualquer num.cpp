#include<stdio.h> //biblioteca
int main(){ //funcao principal
    int n, tab=0, r; //declaracao de variaveis
    
    printf("coloque o numero que voce quer a tabuada:"); //pergunta o numero
    scanf("%i", &n); //leitura do numero
    
    while(tab<=10){ //loop ate dez
        r=tab*n; //calculo da tabuada
        printf("%i * %i = %i\n", n, tab, r); //exibe o resultado
        ++tab; //incrementa o contador
    }

    return 0; //retorno
}

