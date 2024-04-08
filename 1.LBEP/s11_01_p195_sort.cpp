#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ct xep thu tu cac chuoi van ban
int main()
{
    system("cls");

    int n;
    // vong lap kiem tra viec nhap so phan tu co hop le ko
    while (1 == 1)
    {
        printf(" >> nhap so phan tu N [5-10]: ");
        scanf("%d", &n);
        if (n >= 5 && n <= 10)
        {
            break;
        }
    }
    fflush(stdin); // xoa bo dem ban phim

    char danhSach[n][31]; // kb mang chua n-chuoi ky tu (moi chuoi chua td 30 ktu)
    printf(" *** nhap ten cac san pham *** \n");
    for (int i = 0; i < n; i++)
    {
        printf(" >> nhap ten san pham thu %d: ", i + 1);
        scanf("%[^\n]", danhSach[i]);
        fflush(stdin); // xoa bo dem ban phim
    }

    printf("\n\n danh sach ten san pham \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %2d.  %s \n", i + 1, danhSach[i]);
    }

    // sap xep chuoi trong mang danhsach
    char tam[31];
    for (int k = 1; k < n; k++)
    {
        for (int i = n - 1; i >= k; i--)
        {
            if (strcmp(danhSach[i], danhSach[i - 1]) < 0)
            {
                strcpy(tam, danhSach[i]);             
                strcpy(danhSach[i], danhSach[i - 1]);
                strcpy(danhSach[i - 1], tam);
            }
        }
    }

    printf("\n\n danh sach ten san pham theo thu tu a-z \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %2d.  %s \n", i + 1, danhSach[i]);
    }
}