#include <stdio.h>
#include <stdlib.h>

int nove();
int main(int argc, char *argv[]){
    
    int sum, inteiro, resto, n, ponteiro_counter;
    int *counter;
    
    ponteiro_counter = 0;
    sum = 0;
//    printf("Soma: %i\n", sum);
    counter = &ponteiro_counter;    
    
    scanf("%d", &inteiro);
    while(inteiro != 0){
        *counter = 0;
//        printf("Inteiro: %i\n", inteiro);
//        printf("Soma: %i\n", sum);
        n = nove(inteiro, sum, resto, counter);
//        printf("N: %i\n", n);
        if(n % 9 == 0){
            printf("%i is a multiple of 9 and has a 9-degree %i.\n", inteiro, ponteiro_counter);
        }
        scanf("%d", &inteiro);
    }
    return 0;
}

int nove(int number, int soma, int resto, int *pcounter){  
//    printf("Inteiro: %i\n", number);
//    printf("Soma: %i\n", soma);
    if(number <=9){
        soma += number;
//        printf("aqui\n");
//        printf("soma: %i\n", soma);
        *pcounter += 1;
        return soma;
    }
    else{
        resto = number % 10;
        number = number / 10;
        soma += resto;
        *pcounter += 1;
//        printf("aca\n");
//        printf("soma: %i\n", soma);
        soma = nove(number, soma, resto, pcounter);
        return soma;
    }  
}



