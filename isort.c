#include <stdio.h>
#include "isort.h"

void shift_element(int* arr,int i){
    while(i>0){
        int temp = *(arr+i);
        *(arr+1+i)=temp;
        i--;
    }
}
void insertion_sort(int* arr, int len){
    for(size_t i =0;i<len;i++){
        for (size_t j = 0; j < i; j++){
            if(*(arr+i)< *(arr+j)){
                int temp = *(arr+i);
                shift_element((arr+j-1),i-j);
                *(arr+j)=temp;   
            }
        }   
    }
}
int main(){
    int arr [12];
    int y=0;
   for (size_t i = 12; i >0; i--)
   {
       arr[y++]=i;
   }
   shift_element(arr,4);
    for (size_t i = 0; i <12; i++)
   {
    int x =*(arr+i);
    printf("%d",x);
    if ( i!=11) printf(",");
   }
   printf("\n");

   insertion_sort(arr,12);
   for (size_t i = 0; i <12; i++)
   {
    int x =*(arr+i);
    printf("%d",x);
    if ( i!=11) printf(",");
   }
   
    
    return 0;
}