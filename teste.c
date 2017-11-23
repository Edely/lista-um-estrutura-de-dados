#include <stdio.h>
#include <stdlib.h>

int adicionar();
int main(){
    int inteiro, soma;
    scanf("%d", &inteiro);
    soma = adicionar(inteiro);
    printf("%d\n", soma);

    return 0;
}

int adicionar (int inteiro){
    if (inteiro != 0){
        return (inteiro % 10 + adicionar(inteiro / 10));
    }
    else{
       return 0;
    }
}