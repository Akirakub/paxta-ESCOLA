#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int x;
int i, j;

void pow3(){
    system("cls");
    float p3 = pow(x, 3);
    printf("\nResultado: %.2f\n", p3);
    system("pause");
}

void quadrada(){
    system("cls");
    float s2 = sqrt(x);
    printf("\nResultado: %.2f\n", s2);
    system("pause");
}

void fatorial(){
    system("cls");
    float f = 1;
    for (i = 1; i <= x; i++){
        f *= i;
    }
    printf("\nResultado: %.1f\n", f);
    system("pause");
}

void divisores(){
    system("cls");
    printf("\nDivisores de %d:\n", x);
    for (i = 1; i <= x; i++){
        if (x % i == 0){
            printf("%d ", i);
        }
    }
    printf("\n\n");
    system("pause");
}

void primo(){
    system("cls");
    int flag = 0;
    for (i = 1; i <= x; i++){
        if (x % i == 0 && i>1 && i!= x){
            flag = 1;
        }
    }
    if (flag == 1){
        printf("O numero nao e primo.");
    } else {
        printf("E primo");
    }
    printf("\n\n");
    system("pause");
}

void soma(){
    system("cls");
    int i;
    float resultadof;
    for(i=1; i<=x; ++i){
        resultadof += i;
    }
    printf("a soma deu: %f", resultadof);
    system("pause");
    
}

void tipo(){
    
    system ("cls");
    
    if(x%2 ==0){
        printf("seu num é par");
    }
    else{
        printf("seu num é impar");
    }
    system("pause");
    
}

int main(){
    int o = 0; // Inicializado para entrar no loop corretamente
    
    while (o != 8){
        system("cls");
        printf("O menu das operacoes, selecione uma opcao:\n");
        printf("1 - Potencia de 3 \n");
        printf("2 - Raiz quadrada de x \n");
        printf("3 - Fatorial \n");
        printf("4 - Verificar se e primo \n");
        printf("5 - Calculo de somatorio (1 ate x) \n");
        printf("6 - Verificar se e par \n");
        printf("7 - exibir todos os divisores \n");
        printf("8 - sair\n");
        printf("escolha um: ");
        scanf("%i", &o);
        
        if (o == 8) {
            break;
        }
        
        system("cls");
        printf("Insira o valor de x: ");
        scanf("%i", &x);
        
        switch (o){
            case 1:
                pow3();
                break;
            case 2:
                quadrada();
                break;
            case 3:
                fatorial();
                break;
            case 4:
                primo();
                break;
            case 5:
                soma();
                break;
            case 6:
                tipo();
                break;
            case 7:
                divisores();
                break;
            default:
                printf("Opcao invalida!\n");
                system("pause");
                break;
        }       
    }
    return 0;
}
