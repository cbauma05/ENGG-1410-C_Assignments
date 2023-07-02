/* 
Assignment 1
Author: Cameron Bauman
Date: 01/16/2023
Purpose: To take 2 integer inputs from the user and perform a calculation based on the operation that they enter.
*/

#include <stdio.h>

int main()
{

    int a, b, total = 0;    // declaring variables for both inputs, and the total after the operation
    char ch;                // declaring a character variable for the math operator input

    printf("Enter number for a: ");  // prompts user for inputs
    scanf("%d", &a);
    printf("Enter number for b: ");
    scanf("%d", &b);
    printf("Enter an operation: ");
    scanf(" %c", &ch);

  if (ch == '+'){                   // sequence for addition case
      total = a + b;
      printf("a + b = %d", total);
   }
  
  else if (ch == '-'){              // sequence for subtraction
      total = a - b;
      printf("a - b = %d", total);
   }
  
   else if (ch == '*'){             // sequence for multiplication
      total = a * b;
      printf("a * b = %d", total);
   }

   else{                           // sequence if any other character was entered. Error message is displayed
      printf("ERROR, enter either: * - +");
  }    

    return 0;
}
