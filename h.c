#include <stdio.h>
#define MAX 1000

int main(){
    
    int i, j;
    char frase[MAX];
    scanf("%[^\n]s", &frase);
    
    for(i=0; i < MAX; i++){
        
        if(frase[i] == 'p' || frase[i] == 'P'){            
            for(j = i; j< MAX; j++){
                frase[j] = frase[j+1];
            }            
        }   
        
    }
    
    printf("%s\n", frase);
    return 0;
}