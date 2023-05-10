#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Enter number to check: \n");
    int n;
    scanf("%d",&n);
    int reversed = 0;
    int i = 1;
    while (n/pow(10,i) !=0){
        int power = (int)pow(10,i);
        reversed += (n%power)* power ;
        i++;
    }
    printf("Reversed : %d",reversed);
    if(reversed == n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}