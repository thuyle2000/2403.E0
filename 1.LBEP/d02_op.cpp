#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    int a,b,c;
    float f;

    printf(" nhap 2 so nguyen bat ky : ");
    scanf("%d%d", &a, &b);

    printf(" 2 so vua nhap: \n");
    printf(" so 1 = %d, so 2 = %d \n", a,b);

    printf(" %d + %d = %d \n", a,b, a+b);
    printf(" %d - %d = %d \n", a,b, a-b);
    printf(" %d * %d = %d \n", a,b, a*b);
    printf(" %d / %d = %d \n", a,b, a/b);
    printf(" %d %% %d = %d \n", a,b, a%b);

    f = (float)a/b;
    printf(" f = %f \n", f);
}