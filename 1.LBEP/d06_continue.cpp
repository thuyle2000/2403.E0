#include <stdio.h>
#include <stdlib.h>

// chuong trinh nhap n, va tinh tong cua n so nguyen dau tien
int main()
{
    system("cls");
    int n, sum = 0;

    do
    {
        printf(" >> nhap so nguyen duong n [3-19]:  ");
        scanf("%d", &n);
        if (n <=2 || n >= 20)
        {
            printf(" Loi: so nhap ko hop le. vui long nhap lai ! \n");
            continue;
        }
        break;
    } while (1 == 1);


    int i = 1;
    while (i <= n)
    {
        printf("+ %d ", i);
        sum += i;
        i++;
    }
    printf(" = %d \n", sum);
}