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

void question2()
{
    system("cls");
    printf("Task 2: under construction .. .\n\n");
}