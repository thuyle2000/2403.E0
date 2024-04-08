#include <stdio.h>
#include <stdlib.h>
// chuong trinh tinh giai thua cua 1 so nguyen n
// n! = 1*2*3*4* ...*n, voi 0!= 1! = 1
int main(){
    system("cls");
    int n;
    while (1==1)
    {
        printf(">> nhap so nguyen n [0-50]: ");
        scanf("%d", &n);
        if(n>=0 && n<=50) {
            break;
        }
    }

    long double kq = 1;
    for (int i = 1; i <= n; i++)
    {
        kq = kq * i;
    }
    
    __mingw_printf(" => %d! = %.0Lf \n", n, kq);
}