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
    int cnt = count, result = 0;
    q = n;

    while(q!=0)
    {
        rem = q%10;
        while(cnt!=0)
        {
            mul = mul*rem;
            cnt--;
        }
        result = result+mul;
        cnt = count;
        q = q/10;
        mul=1;
    }
    return 0;
}