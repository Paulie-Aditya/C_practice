#include <stdio.h>
#include <math.h>

int main(void){
    printf("Enter Number: \n");
    int n ;
    scanf("%d",&n);

    if (n <=1){
        printf("False");
        return 0;
    }
    else if (n ==2){
        printf("True");
        return 0;
    }

    for(int i = 2;i<=ceil(sqrt(n));i++){
        if (n%i){
            printf("False");
            return 0;
        }
    }
    printf("True");
    return 0;
}