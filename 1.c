#include <stdio.h>

#define ULTIMOANO 1984

int main(){
    
    int anoAtual;
    int proximoAno;
    
    scanf("%d", &anoAtual);
    
    int diferencaAnos = anoAtual - ULTIMOANO;
    
    if(diferencaAnos % 76 == 0){
        /* printf("mod 0  %i\n", diferencaAnos); */
        
        proximoAno = anoAtual + 76;
        printf("Proximo ano: %i\n", proximoAno);
    }
    else{
        proximoAno = 76 - (diferencaAnos % 76) + anoAtual;
        printf("Proximo ano %i\n", proximoAno);
    }
    
    return proximoAno;
        
    /* printf("Ano diferenca anos: %d\n", diferencaAnos); */
}