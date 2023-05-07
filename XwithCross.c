#include <stdio.h>

int main(){
    int i, j, N, count;

    printf("Enter the width of the Cross X: ");
    scanf("%d", &N);
    count = N * 2 - 1;

    for(i=1; i<=count; i++){
        for(j=1; j<=count; j++){
            if(i==1 || j==1 || j==i || j==count-i+1 || j==count || i==count )
            printf("*");
            else
            printf(" ");
        }
            printf("\n");
    }
return 0;

}