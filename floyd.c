//Floyd's Triangle
//Right Angled Triangular Array of natural numbers.
//Filled by natural numbers consecutively starting with 1 in the top left corner

#include <stdio.h>

int main(void){
    printf("Enter number of rows you want : \n");
    int rows ;
    scanf("%d",&rows);

    int n=1;

    for(int i = 1;i<=rows;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}