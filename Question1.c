/* 
Assignment 1
Author: Cameron Bauman
Date: 01/16/2023
Purpose: To take a 4 digit integer input and print it in reverse order.
*/

#include <stdio.h>

int main()
{

int num; // user input
int numReverse; // reversed input
int x; // placeholder

printf("Please enter your 4 digit number: ");
scanf("%d", &num);

if (num>=1000 && num<=9999){
    numReverse = 0;
    
    while(num>0){
        x = num % 10;
        numReverse = numReverse * 10 + x;
        num = num / 10;
    }
    printf("The digit in reverse order is: %d", numReverse);
}


else
    printf("You must enter a 4 digit number...");


return 0;

}