//Floyd's Triangle
//Right Angled Triangular Array of natural numbers.
//Filled by natural numbers consecutively starting with 1 in the top left corner

#include <stdio.h>

int main(void){
    printf("Enter number of rows you want : \n");
    int n ;
    scanf("%d",&n);
    int j = 1;
    for(int i = 1;i<=n;i++){
        for(;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}