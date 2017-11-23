#include <stdio.h>
#include <stdlib.h>

int f91(int inteiro);

int main(int argc, char *argv[]){
    
    int argumento, n;
    argumento = -1;
    while(argumento!=0){
        scanf("%d", &argumento);
        if(argumento !=0){
            n = f91(argumento);        
            printf("f91(%i) = %i\n", argumento, n);
        }
    }
    
    return 0;
}

int f91(int inteiro){    
    if(inteiro >= 101){
        inteiro = inteiro - 10;
    }else{
        inteiro = f91(f91(inteiro + 11));
    }        
    return inteiro;
}