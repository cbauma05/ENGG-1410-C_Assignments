#include <stdio.h>

double calcAvg(double, double);

double calcAvg(double a, double b){
    a = a/b;
    return a;
}

int main()
{
    double arr[5];
    double x;
    int y;
    
    printf("Please enter the number of grades in your calculation: ");
    scanf("%d", &y);
    
    for (int i = 0; i < y; i++){
        printf("Please enter the grade: ");
        scanf("%lf", &arr[i]);
    }
    

    for (int i = 0; i < y; i++){
        x += arr[i];      
    }
    
    x = calcAvg(x, y);
    
     printf("Your average is: %5.1lf", x);
  

    return 0;
}
