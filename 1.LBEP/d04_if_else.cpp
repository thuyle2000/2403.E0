#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a, b;
    printf("nhap so thu 1: ");
    scanf("%d", &a);
    printf("nhap so thu 1: ");
    scanf("%d", &b);

    if (a % b == 0)
    {
        printf("=> %d la boi so cua %d !\n", a, b);
    }
    else
    {
        printf("=> %d khong phai la boi so cua %d !\n", a, b);
    }

    printf("\n ket thuc chuong trinh ! hen gap lai ! \n");
}