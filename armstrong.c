#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Enter the number to be checked: \n");
    int n;
    scanf("%d",&n);

    int q = n;
    int count = 0;

    while(q!=0)
    {
        q /=10;
        count++;
    }
    int x = count;
    int result = 0;
    for (;x>=0;x--)
    {
        result += pow(n/(pow(10,x)),count);
    }

    printf("%d",result);
    return 0;
}