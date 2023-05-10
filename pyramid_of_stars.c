#include <stdio.h>

int main(void)
{
    printf("How many rows of pyramid do you want? ");
    int n = scanf("%d",&n);

    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j = 1;j<2*n -1;j++)
        {
            if(j >= n-(i-1) && j <= n+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}