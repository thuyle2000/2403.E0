#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a, b;
    printf(" nhap so nguyen a:");
    scanf("%d", &a);
    printf(" nhap so nguyen b:");
    scanf("%d", &b);

    if(a*b >=1000){
        printf("=> a*b (%d) >= 1000 \n", a*b);
    }
    else{
        printf("=> a*b (%d) < 1000 \n", a*b);
    }
}