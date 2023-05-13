// Finding sum of array using pointers

#include <stdio.h>

void doSum(int a[], int len, int *sum){
    for(int i = 0;i<len;i++){
        *sum +=a[i];
    }
}
int main(){
    int a[] ={1,2,3,4,5,6,7,8,9,10};
    int sum = 0;
    int len = sizeof(a)/sizeof(a[0]);
    doSum(a,len,&sum);
    printf("Sum of array : %d",sum);
    return 0;
}