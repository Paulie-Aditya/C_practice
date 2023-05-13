//Reverse a Series of Numbers using pointers

#include <stdio.h>

int main(){
    int a[] = {1,2,3,4,5};
    int *p;
    int n = sizeof(a)/sizeof(a[0]);

    printf("Elements in Reverse order: \n");
    for(p = a+n-1; p>=a; p--){
        printf("%d ",*p);
    }
    return 0;

}