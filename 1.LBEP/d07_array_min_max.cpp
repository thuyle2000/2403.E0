#include <stdio.h>
#include <stdlib.h>
// chuong trinh tao 1 mang n-so nguyen, tim so lon nhat, nho nhat va binh quan.

int main()
{
    system("cls");
    int n;
    while (1 == 1)
    {
        printf(" >> nhap so phan tu [5-20]: ");
        scanf("%d", &n);
        if (n >= 5 && n <= 20)
        {
            break;
        }
    }

    // tao mang so nguyen a[] co n-phan tu
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf(" nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // in day so vua nhap ra man hinh
    printf("\n => day so vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d. ", a[i]);
    }

    // tim so lon nhat, nho nhat va gia tri binh quan cua mang a
    int min = a[0], max = a[0], sum = 0;
    for (int i = 0; i < n; i++)
    {
        min = (min > a[i]) ? a[i] : min;
        max = (max < a[i]) ? a[i] : max;
        sum += a[i];
    }

    printf("\n => so nho nhat : %d", min);
    printf("\n => so lon nhat : %d", max);
    printf("\n => binh quan   : %.2f", (float)sum/n);
}