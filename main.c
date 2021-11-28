#include "my_mat.h"
#include <stdio.h>

void main(){
    
    int mat[10][10]; 
    char userChar ; 
    while((userChar=getchar()) != 'D'){
        
        if (userChar == 'A'){
            A(mat); 
        }

        if(userChar == 'B'){
            int ans = B(mat);
            if(ans == 0){
                printf("False\n");   
            }
            else {
                printf("True\n");
            }
        }

        if(userChar == 'C'){
             int ans = C(mat);
             if(ans == 0 ){
                 printf("-1\n");
             }
             else {
                printf("%d\n", ans) ;  
             }
        }
        
    }
}