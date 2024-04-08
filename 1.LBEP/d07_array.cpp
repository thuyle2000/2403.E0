#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int a[] = {10, 12, 8, 9};
    int b[] = {10, 12, 8, 9};
    int c[4];

    if(a==b){
        printf("a bang b \n");
    }
    else{
        printf("a khac b \n");
    }


    for (int i = 0; i < 4; i++) {
        c[i] = b[i];
    }
    
    printf(" mang c: ");
    for (int i = 0; i < 4; i++)  {
        printf("%d ",c[i]);
    }
    

}