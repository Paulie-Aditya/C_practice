#include <stdio.h>

void TowerOfHanoi(int n, char fromTower, char toTower, char auxTower){
    if(n == 1){
        printf("Move disk 1 from Tower %c to Tower %c\n", fromTower, toTower);
        return;
    }

    //Move n-1 disks from source to aux, use destination as helper
    TowerOfHanoi(n-1,fromTower, auxTower, toTower);
    printf("Move disk %d from Tower %c to Tower %c\n", n, fromTower, toTower);
    
    //Now we have to move n-1 disks from aux to destination using source as helper
    TowerOfHanoi(n-1, auxTower, toTower, fromTower);
}
int main(void){
    TowerOfHanoi(4,'A','B','C');
    return 0;
}