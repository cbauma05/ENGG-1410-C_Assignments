/* 
Assignment 1
Author: Cameron Bauman
Date: 01/16/2023
Purpose: To take an integer input and check if it is a "perfect number" (a number that is equal to the sum of its divisors excluding itself)
*/

#include <stdio.h>

int perfectCheck(int n); // declare perfectCheck function


int main()
{

    int a;          // declare variable for user input and prompts for input
    printf("Enter a number to check: ");
    scanf("%d", &a);

    perfectCheck(a); // execute perfectCheck function

    return 0;
}

int perfectCheck(int n)
{

    int sum = 0;     // declaring a reusable sum variable and initially setting it to 0

    for(int i=1; i<=n; i++){
           if (n % i == 0){   // if the quotients remainder is 0 it is added to sum variable. 
            sum += i; //add it
           
        }
        
    }
    
    if (n == sum - n){        // if the number is equal to the sum of its divisors (other than itself) it will print a message and return 1
        printf("Result is Perfect");
        return 1;
    }
    
    else{                     // otherwise it prints a different message and returns 0
        printf("Result is not Perfect");  
        return 0;
    }
    
}
