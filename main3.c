#include <stdio.h>

int main(){
    int a, count;
    float s = 0;
    printf("Digite um número:");
    scanf("%i",&a);
    
    count = 1;
    
    while(count<=a){
       s = s + ((float)1/count);
       count++;
    }
    printf("Valor total: %.2f",s);
    return 0;
}