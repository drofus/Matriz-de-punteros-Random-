#include <stdio.h>
#include <stdlib.h>
int main(){
    int af,ac,i,j;

    printf("\nEscribir de tu matriz de mxn que quieras generar\n");
    scanf("%dx%d", &af, &ac);

    int **A;

    A = (int **)malloc(ac*sizeof(int*));
    for (i=0;i<af;i++){
        A[i] = (int *)malloc(af*sizeof(int));
    }
    for (i=0;i<af;i++) {
        printf("\n");
        for (j = 0; j<ac ; j++) {
            A[i][j] = rand();
            printf("\t%d",A[i][j]);
        }
    }
    return 0;
}

