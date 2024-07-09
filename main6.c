#include <stdio.h>

int main(){
    int idade, idade2, count, count2;
    
    
    while (1){
        printf("Digite a sua idade:");
        scanf ("%i",&idade);
        
         if (idade==0){
        break;
     }
    if (idade<18){
        count++;
    }
    else if(idade>30){
        count2++;
    }
    }
    
   
   printf("A quantidade de pessoas com menos de 18 anos é(são): %i e maiores de 30 anos é(são): %i",count,count2);
    
    return 0;

}