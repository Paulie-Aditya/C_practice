//Finding min and max of array using pointers

#include <stdio.h>

void minMax(int arr[], int len, int *min, int *max){
    *min = *max = arr[0];

    for(int i = 1; i<len; i++){
        if(arr[i]>*max){
            *max = arr[i];
        }
        if (arr[i]<*min){
            *min = arr[i];
        }
    }
}

int main(void){
    int a[] = {23,45,89,0};
    int len = sizeof(a)/sizeof(a[0]);
    int min,max;
    minMax(a,len,&min,&max);
    printf("Min of array: %d\nMax of Array: %d\n",min,max);
    return 0;
}