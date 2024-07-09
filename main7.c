#include <stdio.h>

int main(){
    int count = 0, multiplo, num = 1;
    
    while(count < 50){
        multiplo = num % 3;
        if(multiplo == 0){
            printf("Os números múltiplos de 3 são: %i \n",num);
            count++;
        }
        num++;
    }
    
    return 0;
}