#include <stdio.h>
#include <stdlib.h>

//in ra cac so chan be hon hoac bang so duoc nhap vo chuong trinh
int main(){
    system("cls");
    int n;
    printf(" vui long nhap so nguyen bat ky: ");
    scanf("%d", &n);

    int start = (n%2==0)?n:n-1;
    printf("=> cac so chan <= %d : \n", n);
    for (int i = start; i >=0 ; i-=2)
    {
        printf("%d \t", i);
    }
    
}