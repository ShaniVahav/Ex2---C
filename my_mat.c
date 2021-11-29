#include <stdio.h>
#include <stdlib.h>


        /* Build a matrix */
        void A(int mat[10][10]){
        for (int i=0; i<10; i++)
            {
                for (int j=0; j<10; j++)
                {   
                 scanf("%d",&mat[i][j]);
                }
        }
    }
      
    /* The shortest root from i to j */
        int C(int mat[10][10]){
        int matcopy[10][10];   
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                matcopy[i][j] =  mat[i][j] ;
            }
        }
            int i, j;
            scanf("%d",&i);
            scanf("%d",&j);
           for(int k = 0; k < 10; k++) {
               for(int i = 0; i < 10; i++) {
                   for(int j = 0; j < 10; j++) {
                       if(i == j){
                        continue;
                       } 
                       if((matcopy[i][k] != 0) && (matcopy[k][j]!= 0 )){ 
                           if((matcopy[i][j] == 0) ||( matcopy[i][j] > matcopy[i][k] + matcopy[k][j])){
                            matcopy[i][j] =  matcopy[i][k] + matcopy[k][j];
                       }
           
                        }
                    }
                 }
             }      
        return matcopy[i][j];
        }

 int B(int mat[10][10]) {
            int path = C(mat);
            if(path == 0){
                return 0;
            }
            else{ 
                return 1;
            }
        }