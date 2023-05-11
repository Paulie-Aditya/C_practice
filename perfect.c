//Perfect Number
//Number is equal to sum of proper divisors (divisors except number itself)

#include <stdio.h>

int main(void){
    printf("Enter number: ");
    int n;
    scanf("%d",&n);
    int sum_of_proper = 0;
    for(int i = 1; i<n ;i++){
        if (n%i == 0){
            sum_of_proper+=i;
        }
    }
    if (sum_of_proper == n){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}