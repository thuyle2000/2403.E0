#include <stdio.h>
#include <stdlib.h>
int main()
{
    // demo vong lap FOR don gian: in ra man hinh 10 lan chuoi "Hello"
    system("cls");
    for (int i = 0; i < 100; i++)
    {
        printf("%3d. Hello !\n", i + 1);
    }
}