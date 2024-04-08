#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls");

    char lastName[30];
    char firstName[12];

    printf(" >> nhap ho: ");
    gets(lastName);
    printf(" >> nhap ten: ");
    gets(firstName);

    printf(" >>>> xin chao, a/c %s %s !\n", lastName, firstName);
}