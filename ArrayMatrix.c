#include <stdio.h>

int multiply(){
}

int main(){

    int matA[3][3];
    int matB[3][3];

    printf("Enter the contents into Matrix A -> (9 values):\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    printf("The contents of Matrix A are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }   // Print MatA



    printf("Enter the contents into Matrix B -> (9 values):\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matB[i][j]);
        }
    }

    printf("\nThe contents of Matrix B are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matB[i][j]);
        }
        printf("\n");
    }   // Print MatB

    int sum = 0;
    int matC[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                sum += matA[i][k] * matB[k][j]; 
            }
            matC[i][j] = sum;
            sum = 0;
        }
    } // Multiplies Matrices and stores them into new array, matC

    printf("\nThe contents of Matrix C are:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    } // Print Mat C

    return 0;
}