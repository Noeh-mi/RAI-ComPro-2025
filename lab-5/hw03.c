#include <stdio.h>

int main(void){
    int A [3] [3] = { {1, 0, -1},
                      {-1, 2, 3},
                      {2, 4, 5} };
    int B[3][3]={0};
    int i, j, k;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            B[i][j]=0;
            for(k=0;k<3;k++){
                B[i][j]+=A[i][k]*A[k][j];
            }
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}