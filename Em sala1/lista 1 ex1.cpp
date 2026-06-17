#include<stdio.h>

int main(){
	
	float t, v, d ,lu; //declaracao de varieveis 
	printf("Entre com o tempo:\n");			//escrito nas aspas o que voce le na hora
	scanf("%f" , &t);	//leitura dos valores 
	printf("Entre com a velocidade:\n");
	scanf("%f" , &v);
	d=t*v; // calculos
	lu=d/12;
	printf("Os valores tempo,velocidade,distancia,litros usados sao:%.2f %.2f %.2f %.2f," , t, v, d, lu);	//exibindo os valores calculados
	return 0;	
}
