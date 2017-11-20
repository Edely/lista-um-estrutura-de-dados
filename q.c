#include <stdio.h>
#include <stdlib.h>

int f91(int inteiro);

int main(int argc, char *argv[]){
    
    int argumento, n;
    scanf("%d", &argumento);  
    n = f91(argumento);
    printf("%i", n);
    return 0;
}

int f91(int inteiro){    
    if(inteiro >= 101){
        inteiro = inteiro - 10;
        return inteiro;
    }else{
        inteiro = f91(f91(inteiro + 11));
        return inteiro;
    }        
}