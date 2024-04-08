#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// demo cac ham xu ly chuoi van ban
int main()
{
    system("cls");

    // khai bao 2 chuoi chua toi da 79 ky tu.
    char name1[80], name2[80];

    printf(" >> nhap chuoi thu 1: ");
    gets(name1);

    printf(" >> nhap chuoi thu 2: ");
    gets(name2);

    printf(">> chuoi 1: %s \n", name1);
    printf("   so ky tu: %d \n", strlen(name1)); // dem so ky tu cua chuoi 1

    printf(">> chuoi 2: %s \n", name2);
    printf("   so ky tu: %d \n", strlen(name2)); // dem so ky tu cua chuoi 2

    char name3[80];
    strcpy(name3, name2); // gan noi dung chuoi 2 => chuoi 3.
    printf(">> chuoi 3: %s \n", name3);

    strcat(name1, name2); // noi chuoi 2 vo cuoi chuoi 1
    printf("\n sau khi goi ham strcat(name1, name2): ");
    printf("\n => chuoi 1: %s \n", name1);

    // kiem tra chuoi 1 voi 2
    printf("\n so sanh: \n");
    printf(" => chuoi 1 vs chuoi 2:  %d \n", strcmp(name1, name2));
    printf(" => chuoi 2 vs chuoi 3:  %d \n", strcmp(name2, name3));

    //tim chuoi 2 trong chuoi 1
    printf("\n tim kiem: \n");
    printf(" => chuoi 2 co trong chuoi 1 ? %d \n", strstr(name1,name2));
    printf(" => chuoi 1 co trong chuoi 2 ? %d \n", strstr(name2,name1));
}