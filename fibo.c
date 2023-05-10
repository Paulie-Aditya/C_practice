#include <stdio.h>

int main(void){
    int a = 0, b = 1;

    int n;
    printf("Enter n to know the nth Fibonacci Number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Not valid");
        return 0;
    }
    else if (n == 0){
        printf("0");
        return 0 ;
    }
    else if(n == 1){
        printf("1");
        return 0;
    }
    int result;

    for(int i = 1;i<=n;i++){
        result = a+b;
        a = b;
        b = result;
    }
    printf("%d",a);
}