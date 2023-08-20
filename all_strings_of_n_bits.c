#include <stdio.h>
#include <string.h>


void binary(int n){
    if(n<1){
        printf("%s",A);
    }
    A[n-1] = 0;
    binary(n-1);
    A[n-1] = 1;
    binary(n-1);
}