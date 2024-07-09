#include <stdio.h>

int main (){
    int x, y, count, conta;
    printf("Digite o primeiro número:");
    scanf("%i",&x);
    printf("Digite o segundo número:");
    scanf("%i",&y);
    
    count = x + 1;
    
    while(count<y){
        conta = count % 5;
        if (conta == 2 || conta == 3){
            printf("A ordem é: %i\n",count);
        }
        count++;
    }
    
    return 0;
    
}