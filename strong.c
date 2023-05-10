#include <stdio.h>

int factorial(int num){
    if (num == 0 || num == 1){
        return 1;
    }
    int factorial = 1;
    for(int i = 2;i<=num;i++){
        factorial*=i;
    }
    return factorial;
}

int main(){
    printf("Enter number to be checked: \n");
    int n;
    scanf("%d",&n);

    int q = n, result = 0;

    while(q!=0){
        result += factorial(q%10);
        q = q/10;
    }

    if (result == n){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;


}

