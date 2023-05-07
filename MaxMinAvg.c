#include <stdio.h>

void getMinMaxAvg (int arr[], int n, int *min, int *max, float *avg);

int main()
{
  
  int count;
  int arr[count];
  int max;
  int min;
  float avg;

  printf("Enter the number of elements to be put in the array: ");
  scanf("%d", &count);
  printf("Enter the %d elements into the array\n", count);

  for(int i=0; i<count; i++){
     scanf("%d", &arr[i]);
  }
  printf("The elements of the array are:\n");
  for(int i=0; i<count; i++){
     printf("%d ", arr[i]);
  }

  
    getMinMaxAvg(arr, count, &min, &max, &avg);
    
    return 0;
}

void getMinMaxAvg(int arr[], int n, int *min, int *max, float *avg){
    
    *min = arr[0];
    *max = arr[0];
    *avg = 0;

    /*
    Experimenting with basic memory principles

    printf("\n%d\n", min); // prints the address of first element of array
    printf("%d\n", max); // prints address of first element of array but 4 bytes more than min value
    printf("%d\n", avg); // prints address of where int 0 is stored, it is 4 bytes more than max value
    */

    for (int i = 1; i < n; i++){
        
        if (*min > arr[i]) 
        *min = arr[i];
        
        if (*max < arr[i])
        *max = arr[i];
    }    
    
    
    for (int i = 0; i < n; i++){
        *avg += arr[i];
    }
    
        *avg = *avg / n;
        
        printf("\nThe minimum value is: %d\n", *min);
        printf("The maximum value is: %d\n", *max);
        printf("The average value is: %.1f\n", *avg);
}
