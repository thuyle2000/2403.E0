#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");

    int salary, allowance = 100;
    char grade;

    printf(" >> nhap luong cb: ");
    scanf("%d", &salary);
    // fflush(stdin);
    fseek(stdin,0,SEEK_END);
    printf(" >> nhap bac luong [a,b]: ");
    scanf("%c", &grade);

    switch (grade)  {
    case 'A':
    case 'a':
        allowance = 300;
        break;
    case 'B':
    case 'b':
        allowance = 250;
        break;
    default:
        allowance = 100;
    }
    printf("=> Phu cap: %d \n", allowance);
    printf("=> Luong cuoi thang : %d \n", salary+allowance);
}