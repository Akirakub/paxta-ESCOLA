#include<stdio.h>

int main(){
    //Declarando as váriaveis
    int numero_atual, maior, menor;

    //Loop que conta de 0 a 4 (5 repetições)
    for(int i = 0; i < 5; i++){

        //Lê o número atual
        scanf("%d", &numero_atual);

        if(i==0){ //Caso seja a primeira repetição, atribui o primeiro valor como sendo o maior ou menor
            maior = numero_atual; //pois caso vc tente comparar váriaveis sem valor, eles vão ter lixo de memória
            menor = numero_atual; //e aí o código não vai rodar corretamente
        } else { //Caso não seja a primeira repetição, então todas as outras.
            if(numero_atual>maior){ 
                maior = numero_atual; //Muda o maior numero pro numero atual, caso ele seja maior
            }
            if(numero_atual<menor){
                menor = numero_atual; //Muda o menor numero pro numero atual, caso ele seja menor
            }
        }
    }
    printf("Maior: %d\nMenor: %d", maior, menor);
}
