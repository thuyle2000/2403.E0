#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ct quan ly ds cac bac si (pretest 5)
// 1. dinh nghia kieu du lieu bac si
struct Doctor
{
    char id[5], name[31], specialist[25];
    int exp_years;
};

void QuanLyBacSi();
int main()
{
    system("cls");
    QuanLyBacSi();
}

void QuanLyBacSi()
{
    int n;
    while (1 == 1)
    {
        printf(" >> Enter the number of doctors: ");
        scanf("%d", &n);
        if (n >= 3 && n <= 10)
        {
            break;
        }
    }

    struct Doctor ds[n]; // khai bao mang ds[] co chua n-bacsi
    printf("\n >> Please enter the data for");
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\n Doctor no %d:\n", i + 1);
        printf("\t id: ");
        gets(ds[i].id);
        printf("\t name: ");
        gets(ds[i].name);
        printf("\t specialist: ");
        gets(ds[i].specialist);
        printf("\t exp years: ");
        scanf("%d", &ds[i].exp_years);
    }

    // in ra ds ho so bac si
    printf("\n\n Doctor List \n");
    for (int i = 0; i < n; i++)
    {
        printf(" id:%s, name:%s, specialist:%s, exp-years:%d \n",
               ds[i].id, ds[i].name, ds[i].specialist, ds[i].exp_years);
    }

    // in ra ds ho so bac si co tren 10 nam kinh nghiem
    int cnt10 = 0;
    printf("\n\n Doctor List (over ten-year-experience) \n");
    for (int i = 0; i < n; i++)
    {
        if (ds[i].exp_years >= 10)
        {
            printf(" id:%s, name:%s, specialist:%s, exp-years:%d \n",
                   ds[i].id, ds[i].name, ds[i].specialist, ds[i].exp_years);
                   cnt10++;
        }
    }

    if (cnt10==0)
    {
        printf(" >> NOT FOUND !!! \n");
    }
    
}