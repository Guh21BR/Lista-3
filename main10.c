#include <stdio.h>

int main() {

    int num, count = 0, soma = 0;

    while (1) {
        
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        
        if (num >= 10 && num <= 50 && num % 7 == 0) {
            count++; 
            soma += num; 
        }
    }
   
    if (count > 0) {

        float media = (float)soma / count; 

        printf("Foram digitados %d numeros multiplos de 7 no intervalo entre 10 e 50.\n", count);
        printf("A média desses números é: %.2f\n", media);

    } else {

        printf("Nenhum numero múltiplo de 7 foi digitado");

    }
    return 0;
}