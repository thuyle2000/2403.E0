#include <stdlib.h>
#include <stdio.h>
int main(){
    system("cls"); //lenh xoa man hinh

    //lenh khai bao bien bo nho a va b kieu so nguyen
    int a, b;  

    printf("input a: ");
    scanf("%d", &a);

    printf("input b: ");
    scanf("%d", &b);

    int c = a+b;

    printf(" %d + %d = %d \n", a,b,c);
}