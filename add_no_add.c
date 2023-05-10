//Adding two numbers without '+' operator

#include <stdio.h>

int main(void){
    printf("Enter two numbers to be added: ");
    int x,y;
    scanf("%d %d",&x,&y);

    int result = x;
    while(y!= 0){
        result++;
        y--;
    }

    printf("Result is: %d",result);

    return 0;
}