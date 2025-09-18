#include <stdio.h>

int main(void){
    int A [3] [3] = {{  }};
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i != j){
                A[i][j] = 0;
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}