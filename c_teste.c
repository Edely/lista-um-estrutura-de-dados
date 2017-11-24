#include <stdio.h>

int main(){
    int rect1[4];
    int rect2[4];    
    for(int i = 0; i < 4; i++){
        scanf("%i", &rect1[i]);    
    }
//    for(int i = 0; i < 4; i++){
//        printf("%i", rect1[i]);    
//    }
    for(int j = 0; j < 4; j++){
        scanf("%i", &rect2[j]);    
    }        
//    int x0, y0, x1, y1 = rect1[0], rect1[1], rect1[2], rect1[3];
//    int x2, y2, x3, y3 = rect2[0], rect2[1], rect2[2], rect2[3];    
    
    //  x0 <= x2 e x2 <= x1;
    //  y0 <= y2 e y2 <= y1;
    if(rect1[0] <= rect2[0] && rect2[0] <= rect1[2] && rect1[1] <= rect2[1] && rect2[1] <= rect1[2]){
        printf("1\n");
    }
    //  x0 <= x3 e x3 <= x1;
    //  y0 <= y3 e y3 <= y1;
    else if(rect1[0] <= rect2[2] && rect2[2] <= rect1[2] && rect1[1] <= rect2[3] && rect2[3] <= rect1[3]){
        printf("1\n");
    }   
    
    //  x2 <= x0 e x0 <= x3;
    //  y2 <= y0 e y0 <= y3;
    else if(rect2[0] <= rect1[0] && rect1[0] <= rect2[2] && rect2[1] <= rect1[1] && rect1[1] <= rect2[3]){
        printf("1\n");
    }   
    //  x2 <= x1 e x1 <= x3;
    //  y2 <= y1 e y1 <= y3;
    else if(rect2[0] <= rect1[2] && rect1[2] <= rect2[2] && rect2[1] <= rect1[3] && rect1[3] <= rect2[3]){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
    
}