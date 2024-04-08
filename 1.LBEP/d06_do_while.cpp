#include <stdio.h>
#include <stdlib.h>

//nhap 1 day so bat ky, ket thuc viec nhap lieu khi user nhap so 0
int main(){
    system("cls");
    int n;
    int count = 0;

    //vong lap dc thi hanh khi n!=0
    do{
        printf(" >> nhap 1 so nguyen bat ky (!=0): ");
        scanf("%d", &n);
        count++;
    }while(n!=0);

    printf("\n >> Co %d so da duoc nhap. \n",--count);
}