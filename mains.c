#include <stdio.h>
#include "isort.h"


int main(){

int arr [SIZE];
    int i = 0;
    while (i<50)
    {
      printf("Plese enter a number\n");
      scanf("%d",(arr+i));
      i++;
    }
    insertion_sort(arr,50);
    for (size_t j = 0; j <50; j++)
    {
      printf("%d",arr[j]);
      if(j!=49)
      printf(",");
    }    
    return 0;
}