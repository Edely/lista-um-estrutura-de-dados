#include <stdio.h>
#include <stdlib.h>

int nove();
int main(int argc, char *argv[]){
    
    int sum, resto, n;
    long long int inteiro;
    
    scanf("%lld", &inteiro);
    while(inteiro != 0){
        
        resto = nove(inteiro, resto);
        if(n % 9 == 0){
            printf("%lld is a multiple of 9 and has a 9-degree.", inteiro);
        }else{
            printf("%lld is not a multiple of 9.\n", inteiro);
        }
        scanf("%lld", &inteiro);
    }
    return 0;
}

int nove(int number, int resto){
    resto = number % 10;
    number = number / 10;
    soma += resto;
    soma = nove(number, resto);
    return soma;  
}