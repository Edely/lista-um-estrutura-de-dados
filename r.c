#include <stdio.h>
#include <stdlib.h>

int nove();
int main(int argc, char *argv[]){
    
    int soma = 0;
    int numero = atoi(argv[1]);
    
    soma = nove(numero, soma);
//    printf("%i\n", soma);
    return 0;
}

int nove(int number, int soma){  
    if(number <=9){
        number = number % 10;
        soma += number;
        printf("%i\n", soma);
        return soma;
    }
    else if(number > 9){
        soma = nove(number, soma);
        number = number / 10;
        soma = number + soma;
        printf("%i\n", soma);
        return soma;
    }  
    else{
        printf("%i\n", soma);
        return soma;
    }
}
