//Adding two numbers without '+' operator

#include <stdio.h>

int main(void){
    printf("Enter two numbers to be added: ");
    int x,y;
    scanf("%d %d",&x,&y);

    if (y>0){
        while(y!= 0){
            x++;
            y--;
        }
    }
    else if (y<0){
        while(y!=0){
            x--;
            y++;
        }
    }
    else if (y==0){
        x+=0;
    }


    printf("Result is: %d",x);

    return 0;
}