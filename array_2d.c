/*
Write a Program which outputs sum of rows and columns of a 5x5 2d Array
*/

/*
Row 1: 8 3 9 0 10
Row 2: 3 5 17 1 1
Row 3: 2 8 6 23 1
Row 4: 15 7 3 2 9
Row 5: 6 14 2 6 0
*/
#include <stdio.h>
int main(void){
    int arr[5][5] = {{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};

    //Row Sum

    for(int i = 0; i<5;i++){
        int row_sum = 0;
        for(int j = 0;j<5;j++){
            row_sum+=arr[i][j];
        }
        printf("Row %d total: %d\n",i,row_sum);
    }

    //Column Sum
    for(int i = 0;i<5;i++){
        int column_sum = 0;
        for(int j = 0;j<5;j++){
            column_sum += arr[j][i];
        }
        printf("Row %d total: %d\n",i,column_sum);
    }

    return 0;

}



