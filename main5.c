#include <stdio.h>

int main(){
    int num, count, quantidade, soma = 0;
    float media;
 
    printf("Digite a quantidade de números:");
    scanf ("%i",&quantidade);
    
    while(count<quantidade){
        printf("Digite o número desejado:");
        scanf("%i",&num);
        soma += num;
        count++;
        
    }
   
   media = (float)soma/quantidade;
   printf("A média é: %.2f",media);
  
    
    return 0;
}