#include <stdio.h>
#include <stdlib.h>

int nove();
int main(int argc, char *argv[]){
    
    int sum, inteiro, resto, n;
    scanf("%d", &inteiro);
    while(inteiro != 0){
        n = nove(inteiro, sum, resto);
        if(n % 9 == 0){
            printf("%i is a multiple of 9 and has a degree", inteiro);
        }
            
        scanf("%d", &inteiro);
    }
    return 0;
}

int nove(int number, int soma, int resto){  
    if(number <=9){
        soma += number;
        return soma;
    }
    else{
        resto = number % 10;
        number = number / 10;
        soma += resto;
        soma = nove(number, soma, resto);
        return soma;
    }  
}
