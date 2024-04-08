#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void question1();
void question2();

int main()
{
    char op; // bien chua ma chuc nang ma user muon thuc hien

    // menu chuong trinh
    while (1 == 1)
    {
        system("cls");
        printf("**************************************************\n");
        printf("* Selecting appropriate action:                  *\n");
        printf("* 1. Task 1                                      *\n");
        printf("* 2. Task 2                                      *\n");
        printf("* 3. Quit program                                *\n");
        printf("**************************************************\n");
        printf("  Plz enter your choice [1-3]: ");
        scanf("%c", &op);

        switch (op)
        {
        case '1':
            question1();
            break;
        case '2':
            question2();
            break;
        case '3':
            return 0; // quit program
        default:
            printf(" >> Error: invalid choice, plz try again ! \n");
            break;
        }
        fflush(stdin);
        printf("\n >> Press any key to continue ... ");
        getchar();
    }
}

void question1()
{
    system("cls");
    printf("Task 1: under construction .. .\n\n");
}


struct Doctor
{
    char id[5], name[31], specialist[25];
    int exp_years;
};
void question2()
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