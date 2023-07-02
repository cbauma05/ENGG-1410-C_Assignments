/* 
Assignment 1
Author: Cameron Bauman
Date: 01/16/2023
Purpose: To print all the "perfect numbers" from 1 to 10,000
*/

#include <stdio.h> 

int main()
{

int a, i, sum = 0;       // declaring variables for the for-loop to count from 1 to 10,000. also declares sum variable and placeholder for perfect numbers.

printf("The perfect numbers from 1 to 10,000 are: ");
    
for (i= 1; i < 10000; i++){
    a=1; 
    
    while (a <= (i / 2) )  // this will only check for numbers up to half its size or less
    {
        if (i % a == 0)
            sum += a;      // calculates sum if remainder of divisors is 0 and increments placeholder value
            a++;
    }
    
    if (sum == i)          // if sum is equal to incremented value print the "perfect number"
        printf("%d ",i); 
        sum=0;             // sets sum to 0 for next iteration
    }
    
return 0;

    
}
