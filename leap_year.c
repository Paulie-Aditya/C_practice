//Check whether a year is a leap year or not
#include <stdio.h>
int main(void){
    int year;
    printf("Enter Year: ");
    scanf("%d",&year);

    if (year<0){
        printf("Invalid year");
        return 0;
    }

    if ((year%4 == 0)){
        if (year%100 == 0 && year%400 == 0){
            printf("Leap Year");
        }
        else if(year%100 == 0){
            printf("Not a Leap Year");
        }

        else{
            printf("Leap Year");
        }
    }
    else{
        printf("Not a leap year");
    }
    return 0;
}
