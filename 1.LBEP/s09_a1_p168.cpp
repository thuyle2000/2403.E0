#include <stdio.h>
#include <stdlib.h>

// chuong trinh su dung vong lap in ra day so 100, 95, 90, ... , 5.
int main(){
    system("cls");
    for (int i = 100; i >= 5; i-=5)
    {
        printf("%d, ", i);
    }
    
    printf("\b\b. \n");
}