/* 
Assignment 1
Author: Cameron Bauman
Date: 01/16/2023
Purpose: To take an input of 5 integers and arrange them in descending order.
*/

#include <stdio.h>

int main()
{
    int i, j, var, arr[5];       // declaring variables for the 2 for loops, a placeholder, and an array of 5 integers
    
    printf("Enter the numbers in the array: \n"); // prompts user for 5 integers and puts them into array
    for(i=0; i<5; i++)
    scanf("%d", &arr[i]);
    
    for(i=0; i<5; i++){       // compares two elements of the array at a time and if one is less than the other, the array elements have their values swapped using the var variable
        for(j=i+1; j<5; j++){
            if(arr[i] < arr[j]){
                     var =  arr[i]; 
                     arr[i] = arr[j]; 
                     arr[j] = var;
                }
            }
        }

    printf("The numbers in the array in descending order are: \n"); // prints the new array in descending order
    for (i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
