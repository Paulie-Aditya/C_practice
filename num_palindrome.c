#include <stdio.h>

int main(void)
{
    printf("Enter number to check: \n");
    int n;
    scanf("%d",&n);
    int reversed = 0;
    int i = 1;
    while (n/Math.pow(10,i) !=0){
        reversed += (n/(Math.pow(10,i)))* Math.pow(10,i) ;
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