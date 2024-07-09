#include <stdio.h>

int main() {
    int num, count, primo = 1;

    printf("Digite um número:");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0; 
        
    } else {
        count = 2;
        while (count <= num / 2) {
            if (num % count == 0) {
                primo = 0; 
                break; 
            }
            count++;
        }
    }

    if (primo) {
        printf("É um número primo\n",num);
    } else {
        printf("Não é um número primo\n", num);
    }

    return 0;
}