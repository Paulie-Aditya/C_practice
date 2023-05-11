//Binary to Decimal

#include <stdio.h>
#include <math.h>

int main(void){
    printf("Enter Binary Number: \n");
    int n;
    scanf("%d",&n);

    int result =0, q = n, power = 0,rem;

    while (q!=0){
        rem = q%10;
        result += rem*(pow(2,power));
        power++;
        q = q/10;
    }
    printf("Integer Representation: %d",result);
    return 0;
}