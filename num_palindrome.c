#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Enter number to check: \n");
    int n;
    scanf("%d",&n);

    int result = 0,q = n,rem;

    while (q != 0)
    {
        rem = q%10;
        result = result*10 + rem;
        q = q/10;
    }

    if(result == n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}