#include <stdio.h>
#include <stdlib.h>
//ct tao 1 day so fibonacci n-phantu.
//day so finacci : 1,1,2,3,5,8,13 ... voi n3=n2+n1 ...
int main(){

    system("cls");
    int n;
    do{
        printf(" >> vui long nhap so phan tu [3-100]: ");
        scanf("%d", &n);
        if(n>=3 && n<=100){
            break;
        }
    }while(1==1);

    long double fibo[n]; //khai bao mang fibonacci co n-phan tu
    fibo[0] = fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i-1]+ fibo[i-2];
    }

    //in mang fibonacci chua n-phan tu 
    for (int i = 0; i < n; i++)
    {
        __mingw_printf("%.0Lf  ", fibo[i]);
    } 
}