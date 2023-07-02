/* 
Assignment 1
Author: Cameron Bauman
Date: 01/16/2023
Purpose: To take an integer input and find the sum of all the divisors of the number.
*/

#include <stdio.h>

int sum(int n);   // declaring sum function

int main()
{

    int a;       // declaring user input and scanning it
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The sum is %d", sum(a)); // prints the sum of divisors
    
    return 0;
}

int sum(int n){

    int sum = 0;  // declaring a reusable sum variable and initially setting it to 0

    for (int i=1; i<=n; i++){  // counts from 1 to the user input. every time the quotient remainder is 0 it adds to the sum variable
        if (n % i == 0)
         sum += i;
    }

    return sum; // returns final sum value which is the total sum of the number's divisors
}