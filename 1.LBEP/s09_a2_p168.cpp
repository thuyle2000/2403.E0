#include <stdio.h>
#include <stdlib.h>
// chuong trinh nhap 2 so n1,n2. Tinh tong cac so le giua n1 va n2.
int main(){
    system("cls");
    int n1, n2, sum=0;

    printf(" >> nhap so nguyen thu 1: ");
    scanf("%d", &n1);

    do{
        printf(" >> nhap so nguyen thu 2 (>%d): ", n1);
        scanf("%d", &n2);
    }while(n1>n2);

    int start = (n1%2==0) ? n1+1 : n1;
    while ( start <= n2)
    {        
        printf(" %d + ", start);
        sum += start;
        start +=2; 
    }
    
    printf("\b\b = %d \n", sum);
}