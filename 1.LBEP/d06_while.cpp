#include <stdio.h>
#include <stdlib.h>
//chuong trinh nhap n, va tinh tong cua n so nguyen dau tien
int main(){
    system("cls");
    int n, sum=0;

    printf(" >> nhap so nguyen duong n: ");
    scanf("%d", &n);

    int i=1;
    while(i<=n){
        printf("+ %d ", i);
        sum += i;
        i++;
    }
    printf(" = %d \n", sum);
}