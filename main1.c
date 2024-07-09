#include <stdio.h>

int main(){
    int a, b, count, conta;
    printf("Digite um número inicial:");
    scanf("%i",&a);
    printf("Digite um número final:");
    scanf("%i",&b);
    
    count = a + 1; 
    
    while (count<b){
        conta = count % 2;
            if (conta == 1){
                printf("Os números ímpares são:%i\n",count);
            }
        count ++;
    }
    return 0;
}



