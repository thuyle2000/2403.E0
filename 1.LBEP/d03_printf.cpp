#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int a, b;
    float f;
    char c;
    char hoten[30]; // khai bao chuoi co toi da 29 ky tu.

    printf("nhap so nguyen a: ");
    scanf("%d", &a);

    printf("nhap so nguyen b: ");
    scanf("%d", &b);

    //ham xoa bo dem ban phim
    fflush(stdin);
    
    printf("nhap ho va ten cua ban: ");
    scanf("%[^\n]", hoten);

    printf("\n Du lieu duoc nhap nhu sau \n");
    printf("a = %d \n", a);
    printf("b = %d \n", b);
    printf("ho ten = %s \n", hoten);
}