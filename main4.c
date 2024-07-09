#include <stdio.h>

int main(){
    int divde = 1, divsor = 1;
    float s = 0;
    
    
    while(divsor<=50){
        s = s + ((float)divde/divsor);
        divde += 2;
        divsor +=1;
        printf("S = %.2f\n",s);
    }
    
    
    return 0;
    
    
}