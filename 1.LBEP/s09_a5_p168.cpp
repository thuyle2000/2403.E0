#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");
    int n;
    while (1==1)
    {
        printf(" >> nhap so nguyen n [4-10]: ");
        scanf("%d", &n);
        if(n>=4 && n<=10){
            break;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n");
    for (int i = n; i > 0; i--)
    {
        for (int k = 0; k < i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}