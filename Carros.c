#include <stdio.h>

int main() {
    float motos, carros;

    printf("Digite o número de motos: ");
    scanf("%f", &motos);
    
    printf("Digite o número de carros: ");
    scanf("%f", &carros);

    if (motos < 4 || carros < 5) {
        printf("Você tem direito a desconto no IPVA\n");
    } else if (motos > 4 && carros > 20) {
        printf("Não terá desconto no IPVA\n");
    } else {
        printf("Você NÃO PAGA IPVA\n");
    }

    return 0;
}