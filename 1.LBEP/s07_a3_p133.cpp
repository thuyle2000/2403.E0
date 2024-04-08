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

    if(a-b ==a) {
        printf("=> a-b (%d) = a \n", a-b);
    }
    else if(a-b==b){
        printf("=> a-b (%d) = b \n", a-b);
    }
    else{
        printf("=> a-b (%d) khong bang a, b \n", a-b);
    }
}