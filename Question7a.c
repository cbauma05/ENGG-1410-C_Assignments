/* 
Assignment 1
Author: Cameron Bauman
Date: 01/16/2023
Purpose: Take an input date from the user and output a date that is 1 day later than the input using a structure and custom function.
*/

#include <stdio.h>

struct date{        // Declare date structure
        int day;
        int month;
        int year;
    };

int getNextDate(struct date a);

int main()
{

    struct date a;

    printf("Enter a date in the following format (mm dd yyyy): "); // prompt user input
    scanf("%d %d %d", &a.month, &a.day, &a.year);

    if(a.day < 0 || a.day > 30 || a.month > 12 || a.month < 0 || a.year < 0){  // ensure input is in valid format
        printf("You must enter a valid date");
    }

    else if(a.month == 12 && a.day == 30){  // for case: last day of the year
        printf("The current date is: %d/%d/%d\n", a.month, a.day, a.year); 
        a.year = getNextDate(a); // increment  year
        a.month = 01;             // set month to 1
        a.day = 01;               // set day to 1
        printf("The new date is: %d/%d/%d", a.month, a.day, a.year); 
    }

    else if(a.month < 12 && a.day == 30){   // for case: last day of the month
        printf("The current date is: %d/%d/%d\n", a.month, a.day, a.year);
        a.month = getNextDate(a);  // increment month
        a.day = 01;                // set day to 1
        printf("The new date is: %d/%d/%d", a.month, a.day, a.year);    
    }

    else {                                 // for default case
        printf("The current date is: %d/%d/%d\n", a.month, a.day, a.year);
        a.day = getNextDate(a);     // increment day
        printf("The new date is: %d/%d/%d", a.month, a.day, a.year);  
    }

    return 0;
}


int getNextDate(struct date a)
{

    if(a.month == 12 && a.day == 30){      // for case: last day of the year, increase year
        return a.year + 1;
    }

    else if(a.month < 12 && a.day == 30){  // for case: last day of the month, increase month
        return a.month + 1;
    }

    else {                                 // for default case, increase day
        return a.day + 1;
    }

}