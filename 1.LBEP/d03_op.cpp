#include <stdio.h>
#include <stdlib.h>
int main(){
    system("cls");

    int a=10, c=10, b;
    printf("a = %d, c = %d \n", a,c);

    b = a++;
    printf("  b = a++ => b = %d, a=%d \n", b,a);


    b = ++c;
    printf("  b = ++c => b = %d, c=%d \n", b,c);
}