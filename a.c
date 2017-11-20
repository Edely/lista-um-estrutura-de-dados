#include <stdio.h>
#include <stdlib.h>

#define ULTIMOANO 1986

int main(int argc, char *argv[]){    
    int anoAtual;
    
    scanf("%d", &anoAtual);
    int proximoAno;   
    int diferencaAnos = anoAtual - ULTIMOANO;
    
    if((anoAtual >= 2010) && (anoAtual <= 10 * 10 * 10 * 10)){
        proximoAno = 76 - (diferencaAnos % 76) + anoAtual;
        printf("%i", proximoAno);    
    }
    
    return 0;
    
}