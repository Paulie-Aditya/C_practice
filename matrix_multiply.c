#include <stdio.h>
#define MAX 50

int main(){
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    int arows, acolumns,brows,bcolumns;
    int i,j,k;
    int sum = 0;

    printf("Enter the rows and columns of the Matrix A : ");
    scanf("%d %d", &arows, &acolumns);

    printf("Enter elements of Matrix A: \n");

    for(i=0;i<arows;i++){
        for(j = 0;j<acolumns;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and columns of the Matrix B : ");
    scanf("%d %d", &brows, &bcolumns);

    if (brows != acolumns){
        printf("Can't multiply the Matrices A and B");
    }
    else{
        printf("Enter elements of Matrix B: \n");

        for(i=0;i<brows;i++){
            for(j = 0;j<bcolumns;j++){
                scanf("%d", &b[i][j]);
            }
        }
    }
    printf("\n");

    for(i = 0; i<arows ;i++){
        for(j=0; j<bcolumns;j++){
            for(k=0;k<brows;k++){
                sum += a[i][j] * b[j][k];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    printf("Resultant Matrix \n");
    for(i = 0; i<arows; i++){
        for(j = 0; j<bcolumns; j++){
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }

    return 0;
}