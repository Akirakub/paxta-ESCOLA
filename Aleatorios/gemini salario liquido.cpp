#include <stdio.h>

int main() {
    float bruto, horas, adicional = 0, liquido;

    printf("Salario bruto: ");
    scanf("%f", &bruto);
    printf("Horas trabalhadas: ");
    scanf("%f", &horas);

    // Adicional de 50% para horas excedentes a 160
    if (horas > 160) {
        adicional = (horas - 160) * ((bruto / 160) * 1.50);
    }

    float total_com_adicional = bruto + adicional;

    // Cálculo dos descontos conforme as faixas
    if (bruto < 800) {
        liquido = total_com_adicional;
    } else if (bruto <= 1600) {
        liquido = total_com_adicional - (total_com_adicional * 0.08) - (total_com_adicional * 0.05);
    } else {
        liquido = total_com_adicional - (total_com_adicional * 0.15) - (total_com_adicional * 0.07);
    }

    printf("Salario liquido: %.2f\n", liquido);

    return 0;
}
