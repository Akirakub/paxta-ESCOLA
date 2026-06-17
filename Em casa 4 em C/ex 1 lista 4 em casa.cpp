#include<stdio.h> //biblioteca principal
int main(){ //funcao principal
	int a[9],i, b[9]; //declaracao dos arrays
	
	for(i=0;i<=8;++i){ //for para escanear os 9 indices
		scanf("%i", &a[i]); //scanf da matriz
		
	
		
	}
		b[0]=a[0]; //atribuicao igual
		b[1]=a[1]; //atribuicao igual
		b[2]=a[7]; //atribuicao diferente 
		b[3]=a[6]; //atribuicao diferente
		b[4]=a[4]; //atribuicao igual
		b[5]=a[5]; //atribuicao igual
		b[6]=a[2]; //atribuicao diferente
		b[7]=a[3]; //atribuicao diferente
		b[8]=a[8]; //atribuicao igual
	
		
	for(i=0;i<=8;++i){ //for de printf para exibir
		printf("%i", b[i]); //exibicao da matriz mudada
	}
	
	return 0; //fim da funcao retorno
}
