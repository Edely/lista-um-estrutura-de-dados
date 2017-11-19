#include <stdio.h>
#include <stdlib.h>

int nove();
int main(int argc, char *argv[]){
    
    int soma = 0;
    int numero = atoi(argv[1]);
    
    int resultado = nove(numero, soma);
    return 0;
}

int nove(int number, soma){
    int digito = number % 10;
    int divisao = number / 10;
    
    
    
    
    if(number <=9){
        soma += number;
    }else{
        digito = nove();    
    }
    printf("%i\n", divisao);    
    
}